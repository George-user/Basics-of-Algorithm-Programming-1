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
//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    FILE* fA, * fB, * fC;
//    int m, n, p, q, i, j, k;
//    double** M1, ** M2, ** M3;
//
//    fA = fopen("fA", "r");
//    fB = fopen("fB", "r");
//    fC = fopen("fC", "w");
//
//    fscanf_s(fA, "%d", &n);
//    fscanf_s(fB, "%d", &q);
//
//    if (n != q) {
//        printf("Error: The number of columns in M1 must be equal to the number of rows in M2.\n");
//        return 1;
//    }
//
//    fscanf_s(fA, "%d", &m);
//    fscanf_s(fB, "%dy", &p);
//
//    if (m != p) {
//        printf("Error: The number of rows in M1 must be equal to the number of columns in M2.\n");
//        return 1;
//    }
//
//    M1 = (double**)malloc(m * sizeof(double*));
//    for (i = 0; i < m; i++) {
//        M1[i] = (double*)malloc(n * sizeof(double));
//        for (j = 0; j < n; j++) {
//            fscanf_s(fA, "%lf", &M1[i][j]);
//        }
//    }
//
//    M2 = (double**)malloc(p * sizeof(double*));
//    for (i = 0; i < p; i++) {
//        M2[i] = (double*)malloc(q * sizeof(double));
//        for (j = 0; j < q; j++) {
//            fscanf_s(fB, "%lf", &M2[i][j]);
//        }
//    }
//
//    M3 = (double**)malloc(m * sizeof(double*));
//    for (i = 0; i < m; i++) {
//        M3[i] = (double*)malloc(q * sizeof(double));
//        for (j = 0; j < q; j++) {
//            M3[i][j] = 0;
//            for (k = 0; k < n; k++) {
//                M3[i][j] += M1[i][k] * M2[k][j];
//            }
//        }
//    }
//
//    fprintf(fC, "%d %d\n", n, m);
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < q; j++) {
//            fprintf(fC, "%.2lf ", M3[i][j]);
//        }
//        fprintf(fC, "\n");
//    }
//
//    fclose(fA);
//    fclose(fB);
//    fclose(fC);
//
//    return 0;
//}
#include <iostream>

int main() {
    FILE* fA, * fB, * fC;
    int m, q, i, j, k, n, p;
    
    double** M1, ** M2, ** M3;

    fopen_s(&fA, "fA", "r");
    fopen_s(&fB, "fB", "r");
    fopen_s(&fC, "fC", "w");

    fscanf_s(fA, "%d", &n);
    fscanf_s(fB, "%d", &q);

    if (n != q) {
        printf("Error: The number of columns in M1 must be equal to the number of rows in M2.\n");
        return 1;
    }

    fscanf_s(fA, "%d", &m);
    fscanf_s(fB, "%d", &p);

    if (m != p) {
        printf("Error: The number of rows in M1 must be equal to the number of columns in M2.\n");
        return 1;
    }

    M1 = new double* [m];
    for (i = 0; i < m; i++) {
        M1[i] = new double[n];
        for (j = 0; j < n; j++) {
            fscanf_s(fA, "%lf", &M1[i][j]);
        }
    }

    M2 = new double* [p];
    for (i = 0; i < p; i++) {
        M2[i] = new double[q];
        for (j = 0; j < q; j++) {
            fscanf_s(fB, "%lf", &M2[i][j]);
        }
    }

    M3 = new double* [m];
    for (i = 0; i < m; i++) {
        M3[i] = new double[q];
        for (j = 0; j < q; j++) {
            M3[i][j] = 0;
            for (k = 0; k < n; k++) {
                M3[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }

    fprintf(fC, "%d %d", q, m);
    for (i = 0; i < m; i++) {
        for (j = 0; j < q; j++) {
            fprintf(fC, "%.2lf ", M3[i][j]);
        }
        fprintf(fC, " %.2lf", M3[i][j]);
    }

    fclose(fA);
    fclose(fB);
    fclose(fC);

}