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
//#include <iostream>
//
//int main() {
//    FILE* fA, * fB, * fC;
//    int m, q, i, j, k;
//    int* n, p;
//    double** M1, ** M2, ** M3;
//
//    fopen_s(&fA, "fA", "r");
//    fopen_s(&fB, "fB", "r");
//    fopen_s(&fC, "fC", "w");
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
//    fscanf_s(fB, "%d", &p);
//
//    if (m != p) {
//        printf("Error: The number of rows in M1 must be equal to the number of columns in M2.\n");
//        return 1;
//    }
//
//    M1 = new double* [m];
//    for (i = 0; i < m; i++) {
//        M1[i] = new double[n];
//        for (j = 0; j < n; j++) {
//            fscanf_s(fA, "%lf", &M1[i][j]);
//        }
//    }
//
//    M2 = new double* [p];
//    for (i = 0; i < p; i++) {
//        M2[i] = new double[q];
//        for (j = 0; j < q; j++) {
//            fscanf_s(fB, "%lf", &M2[i][j]);
//        }
//    }
//
//    M3 = new double* [m];
//    for (i = 0; i < m; i++) {
//        M3[i] = new double[q];
//        for (j = 0; j < q; j++) {
//            M3[i][j] = 0;
//            for (k = 0; k < n; k++) {
//                M3[i][j] += M1[i][k] * M2[k][j];
//            }
//        }
//    }
//
//    fprintf(fC, "%d %d", q, m);
//    for (i = 0; i < m; i++) {
//        for (j = 0; j < q; j++) {
//            fprintf(fC, "%.2lf ", M3[i][j]);
//        }
//        fprintf(fC, " %.2lf", M3[i][j]);
//    }
//
//    fclose(fA);
//    fclose(fB);
//    fclose(fC);
//

#include <iostream>

using namespace std;

double solveEquation(double a, double b, double vi) {
    if (vi > 0) {
        return a + vi;
    }
    else {
        return b / vi;
    }
}

int main() {
    double a = 1.75;
    double b = -4.15;
    double v[] = { 1, 1.5, -4, -12.9, 3 };

    int size = sizeof(v) / sizeof(v[0]);

    for (int i = 0; i < size; i++) {
        double wi = solveEquation(a, b, v[i]);
        cout << "w" << i + 1 << " = " << wi << endl;
    }

    return 0;
}



// 
// 
// 
                    //#include <iostream>

                    //int main() {
                    //    int m, n, p, q, i, j, k;
                    //    double** M1, ** M2, ** M3;

                    //    std::cout << "Enter the dimensions of matrix M1 (m n): ";
                    //    std::cin >> m >> n;

                    //    M1 = new double* [m];
                    //    for (i = 0; i < m; i++) {
                    //        M1[i] = new double[n];
                    //        for (j = 0; j < n; j++) {
                    //            std::cout << "Enter element (" << i << ", " << j << ") of matrix M1: ";
                    //            std::cin >> M1[i][j];
                    //        }
                    //    }

                    //    std::cout << "Enter the dimensions of matrix M2 (p q): ";
                    //    std::cin >> p >> q;

                    //    M2 = new double* [p];
                    //    for (i = 0; i < p; i++) {
                    //        M2[i] = new double[q];
                    //        for (j = 0; j < q; j++) {
                    //            std::cout << "Enter element (" << i << ", " << j << ") of matrix M2: ";
                    //            std::cin >> M2[i][j];
                    //        }
                    //    }

                    //    if (n != p) {
                    //        std::cout << "Error: The number of columns in M1 must be equal to the number of rows in M2.\n";
                    //        return 1;
                    //    }

                    //    M3 = new double* [m];
                    //    for (i = 0; i < m; i++) {
                    //        M3[i] = new double[q];
                    //        for (j = 0; j < q; j++) {
                    //            M3[i][j] = 0;
                    //            for (k = 0; k < n; k++) {
                    //                M3[i][j] += M1[i][k] * M2[k][j];
                    //            }
                    //        }
                    //    }

                    //    std::cout << "The product of matrices M1 and M2 is:\n";
                    //    for (i = 0; i < m; i++) {
                    //        for (j = 0; j < q; j++) {
                    //            std::cout << M3[i][j] << " ";
                    //        }
                    //        std::cout << std::endl;
                    //    }

                    //    return 0;
                    //}
