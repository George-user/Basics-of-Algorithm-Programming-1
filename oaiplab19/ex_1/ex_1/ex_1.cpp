#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* fA, * fB, * fC;
    int i, j, k, n, m, p;
    float** M1, ** M2, ** M3;

    // Открытие файлов fA и fB
     fopen_s(&fA,"fA.txt", "r");
     fopen_s(&fB,"fB.txt", "r");
      
    // Чтение размеров матриц M1 и M2
    fscanf_s(fA, "%d", &n);
    fscanf_s(fB, "%d", &m);
    fscanf_s(fA, "%d", &p);
    fscanf_s(fB, "%d", &k);

    // Проверка возможности умножения матриц
    if (p != m) {
        printf_s("Матрицы нельзя перемножить\n");
        return 0;
    }

    // Выделение памяти для матриц M1, M2 и M3
    M1 = (float**)malloc(n * sizeof(float*));
    M2 = (float**)malloc(m * sizeof(float*));
    M3 = (float**)malloc(n * sizeof(float*));
    for (i = 0; i < n; i++) {
        M1[i] = (float*)malloc(p * sizeof(float));
        M3[i] = (float*)malloc(k * sizeof(float));
    }
    for (i = 0; i < m; i++) {
        M2[i] = (float*)malloc(k * sizeof(float));
    }

    // Чтение матриц M1 и M2 из файлов fA и fB
    for (i = 0; i < n; i++) {
        for (j = 0; j < p; j++) {
            fscanf_s(fA, "%f", &M1[i][j]);
        }
    }
    for (i = 0; i < m; i++) {
        for (j = 0; j < k; j++) {
            fscanf_s(fB, "%f", &M2[i][j]);
        }
    }

    // Вычисление произведения матриц M1 и M2
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            M3[i][j] = 0;
            for (int l = 0; l < p; l++) {
                M3[i][j] += M1[i][l] * M2[l][j];
            }
        }
    }

    // Открытие файла fC
     fopen_s(&fC,"fC", "w");

    // Запись размеров матрицы M3 в файл fC
    fprintf(fC, "%d %d\n", n, k);

    // Запись матрицы M3 в файл fC
    for (i = 0; i < n; i++) {
        for (j = 0; j < k; j++) {
            fprintf(fC, "%.2f ", M3[i][j]);
        }
        fprintf(fC, "\n");
    }

    // Закрытие файлов fA, fB и fC
    fclose(fA);
    fclose(fB);
    fclose(fC);

    // Освобождение памяти
    for (i = 0; i < n; i++) {
        free(M1[i]);
        free(M3[i]);
    }
    for (i = 0; i < m; i++) {
        free(M2[i]);
    }
    free(M1);
    free(M2);
    free(M3);

    return 0;
}
