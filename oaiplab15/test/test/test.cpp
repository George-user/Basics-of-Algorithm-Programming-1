#include <iostream>
using namespace std;

int main() {
    int row, col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;
    double a[row][col];
    cout << "Enter matrix elements: ";
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            cin >> a[i][j];
        }
    }
    int negcount = 0;
    double minabs = abs(a[0][0]);
    int minrow = 0, mincol = 0;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] < 0) {
                negcount++;
            }
            if (abs(a[i][j]) < minabs) {
                minabs = abs(a[i][j]);
                minrow = i;
                mincol = j;
            }
        }
    }
    double sum = 0;
    for (int i = minrow; i < row; i++) {
        for (int j = mincol + 1; j < col; j++) {
            sum += abs(a[i][j]);
        }
    }
    cout << "Number of negative array elements: " << negcount << endl;
    cout << "The sum of the modules of the elements located after the element with the minimum modulus: " << sum << endl;
    return 0;
}
