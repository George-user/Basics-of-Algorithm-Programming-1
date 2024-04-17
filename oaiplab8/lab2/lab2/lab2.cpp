#include <iostream>
using namespace std;

int main() {

    double x, max, z, y = 0;

    cout << "Enter x1: ";
    cin >> max;

    for (int i = 2; i <= 5; i++) {
        cout << "Enter x" << i << ": ";
        cin >> z;
        if (z>max)
            max = z;
    }

    cout << "The most max argument y from z: " << z << endl;

    for (int n = 1; n <= 5; n++) {
        cout << "Enter y" << n << ": ";
        cin >> x;
        y += pow(x, 2);
    }

    y = z * y;
    cout << "y = " << y;

    return 0;
}




