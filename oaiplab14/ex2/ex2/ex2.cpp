#include <iostream>
using namespace std;

int main() {
    int n, m, k, b=1;
    int matrix[100][100];
    int* pmatrix = &matrix[0][0];

    printf("Enter matrix dimension (n x m): ");
    scanf_s("%d %d", &n, &m);

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            scanf_s("%d", pmatrix + i * m + j);
        }
    }

    printf("Enter column number k: ");
    scanf_s("%d", &k);

    for (int i = 0; i < n; i++) {
        if (*(pmatrix + i * m + k) != 0) {
            b = 0;
            break;
        }
    }

    printf("b value: %d\n", b);

    return 0;
}
