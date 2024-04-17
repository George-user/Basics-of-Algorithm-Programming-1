#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void rearrange_matrix(int n, int** matrix) {
    // Создаем квадратную матрицу порядка 2n со случайными элементами в диапазоне от -10 до 10
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            matrix[i][j] = rand() % 21 - 10;
        }
    }

    // Переставляем блоки размера n x n в соответствии со схемой
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int temp[n][n];
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n; l++) {
                    temp[k][l] = matrix[i + k][j + l];
                }
            }
            for (int k = 0; k < n; k++) {
                for (int l = 0; l < n; l++) {
                    matrix[i + k][j + l] = matrix[i + n + k][j + n + l];
                    matrix[i + n + k][j + n + l] = temp[k][l];
                }
            }
        }
    }
}

int main() {
    srand(time(NULL));
    int n = 2;
    int** matrix = new int* [2 * n];
    for (int i = 0; i < 2 * n; i++) {
        matrix[i] = new int[2 * n];
    }

    rearrange_matrix(n, matrix);

    // Выводим исходную матрицу
    cout << "Исходная матрица:\n";
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Переставляем блоки и выводим новую матрицу
    rearrange_matrix(n, matrix);
    cout << "\nНовая матрица:\n";
    for (int i = 0; i < 2 * n; i++) {
        for (int j = 0; j < 2 * n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождаем память
    for (int i = 0; i < 2 * n; i++) {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}
