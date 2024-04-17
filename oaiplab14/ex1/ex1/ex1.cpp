#include <iostream>
using namespace std;

int main() {
    int n, m, i, j, row = 0, col = 0;
    double max, a[100][100];

    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    cout << "Enter matrix elements: " << endl;
    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) {
            cin >> a[i][j];
        }

    max = a[0][0];

    for (i = 0; i < n; ++i)
        for (j = 0; j < m; ++j) {
            if (a[i][j] > max) {
                max = a[i][j];
                row = i;
                col = j;
            }
        }

    cout << "Largest matrix element: " << max << endl;
    cout << "Line number: " << row + 1 << endl;
    cout << "Column number: " << col + 1 << endl;

    return 0;
}
