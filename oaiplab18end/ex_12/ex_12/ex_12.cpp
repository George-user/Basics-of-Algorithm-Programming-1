#include <stdio.h>
#include <stdlib.h>

int main() {
    
    FILE* fA, * fB, * fC;
    fopen_s(&fA, "fA.txt", "r");
    fopen_s(&fB, "fB.txt", "r");
    fopen_s(&fC, "fC.txt", "w");
    if (fA == NULL || fB == NULL || fC == NULL) {
        printf_s("Ошибка при открытии файлов.\n");
        exit(1);
    }

    int rowsA, colsA, rowsB, colsB;
    fscanf_s(fA, "%d %d", &rowsA, &colsA);
    fscanf_s(fB, "%d %d", &rowsB, &colsB);

    
    if (colsA != rowsB) {
        printf("Матрицы M1 и M2 нельзя перемножить.\n");
        fclose(fA);
        fclose(fB);
        fclose(fC);
        return 0;
    }


    double** M1 = (double**)malloc(rowsA * sizeof(double*));
    double** M2 = (double**)malloc(rowsB * sizeof(double*));
    for (int i = 0; i < rowsA; i++) {
        M1[i] = (double*)malloc(colsA * sizeof(double));
    }
    for (int i = 0; i < rowsB; i++) {
        M2[i] = (double*)malloc(colsB * sizeof(double));
    }

   
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsA; j++) {
            fscanf_s(fA, "%lf", &M1[i][j]);
        }
    }
    for (int i = 0; i < rowsB; i++) {
        for (int j = 0; j < colsB; j++) {
            fscanf_s(fB, "%lf", &M2[i][j]);
        }
    }

 
    double** result = (double**)malloc(rowsA * sizeof(double*));
    for (int i = 0; i < rowsA; i++) {
        result[i] = (double*)malloc(colsB * sizeof(double));
        for (int j = 0; j < colsB; j++) {
            result[i][j] = 0;
            for (int k = 0; k < colsA; k++) {
                result[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

   
    fprintf(fC, "%d %d\n", rowsA, colsB);
    for (int i = 0; i < rowsA; i++) {
        for (int j = 0; j < colsB; j++) {
            fprintf(fC, "%.2lf ", result[i][j]);
        }
        fprintf(fC, "\n");
    }

    
    for (int i = 0; i < rowsA; i++) {
        free(M1[i]);
        free(result[i]);
    }
    for (int i = 0; i < rowsB; i++) {
        free(M2[i]);
    }
    free(M1);
    free(M2);
    free(result);
    fclose(fA);
    fclose(fB);
    fclose(fC);

    printf("Произведение матриц M1·M2 записано в файл fC.\n");
    return 0;
}




//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int K;
//    printf("Enter meaning K: ");
//    scanf_s("%d", &K);
//
//    FILE* f, * g;
//    if (fopen_s(&f, "f.txt", "r") != 0) {
//        printf_s("Failed to open file f\n");
//        return 1;
//    }
//    if (fopen_s(&g, "g.txt", "w") != 0) {
//        printf_s("Failed to open file g\n");
//        return 1;
//    }
//
//    int number;
//    while (fscanf_s(f, "%d", &number) == 1) {
//        if (number % K == 0) {
//            fprintf_s(g, "%d ", number);
//        }
//    }
//
//    fclose(f);
//    fclose(g);
//
//    printf_s("File g was created successfully\n");
//    return 0;
//}
//#include <stdio.h> 
//
//int main() {
//    FILE* fileA;
//    FILE* fileB;
//    FILE* fileC;
//    int columnsA, columnsB;
//
//    fopen_s(&fileA, "fA.txt", "r");
//    fopen_s(&fileB, "fB.txt", "r");
//    fopen_s(&fileC, "fC.txt", "w");
//
//    if (fileA != NULL && fileB != NULL && fileC != NULL) {
//        fscanf_s(fileA, "%d", &columnsA);
//        fscanf_s(fileB, "%d", &columnsB);
//
//        if (columnsA == columnsB) {
//            fprintf(fileC, "%d\n", columnsA);
//            float M1, M2;
//
//            while (fscanf_s(fileA, "%f", &M1) == 1 && fscanf_s(fileB, "%f", &M2) == 1) {
//                fprintf(fileC, "%.2f\n", M1 + M2);
//            }
//        }
//
//        fclose(fileA);
//        fclose(fileB);
//        fclose(fileC);
//    }
//    else {
//        printf("Error\n");
//    }
//
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    FILE* fileF;
//    FILE* fileG;
//    int num;
//
//    fopen_s(&fileF, "f.txt", "r");
//    fopen_s(&fileG, "g.txt", "w");
//
//    if (fileF != NULL && fileG != NULL) {
//
//        for (int i = 0; i < 5; i++) {
//            fscanf_s(fileF, "%d", &num);
//            fprintf(fileG, "%d\n", num);
//        }
//
//        fseek(fileF, 30, SEEK_SET);
//
//        for (int i = 0; i < 5; i++) {
//            fscanf_s(fileF, "%d", &num);
//            fprintf(fileG, "%d\n", num);
//        }
//
//        fseek(fileF, 15, SEEK_SET);
//
//        for (int i = 0; i < 5; i++) {
//            fscanf_s(fileF, "%d", &num);
//            fprintf(fileG, "%d\n", num);
//        }
//
//        fseek(fileF, -20, SEEK_END);
//
//        for (int i = 0; i < 5; i++) {
//            fscanf_s(fileF, "%d", &num);
//            fprintf(fileG, "%d\n", num);
//        }
//
//        fclose(fileF);
//        fclose(fileG);
//    }
//    else {
//        printf("Error\n");
//    }
//
//    return 0;
//}
