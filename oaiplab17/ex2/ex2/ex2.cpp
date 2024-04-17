#include <iostream>
using namespace std;

void multiply(int** a, int** b, int** result, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int k = 0; k < n; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

bool isPositive(int** matrix, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] <= 0) {
                return false;
            }
        }
    }
    return true;
}

int main() {
    int n;
    cout << "Enter the matrix dimension: ";
    cin >> n;

    int** a = new int* [n];
    int** b = new int* [n];
    int** result = new int* [n];

    for (int i = 0; i < n; i++) {
        a[i] = new int[n];
        b[i] = new int[n];
        result[i] = new int[n];
    }

    cout << "Enter the elements of matrix A: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    cout << "Enter the elements of matrix B: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> b[i][j];
        }
    }

    if (!isPositive(a, n) || !isPositive(b, n)) {
        cout << "One of the matrices contains negative numbers." << endl;
        
    }

    multiply(a, b, result, n);

    cout << "Result of matrix multiplication: " << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
