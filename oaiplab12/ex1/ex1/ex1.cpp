#include <iostream>
using namespace std;

int main() {
    int n, m;
    cout << "Enter integer number N: ";
    cin >> n;
    cout << "Enter integer number M: ";
    cin >> m;
    const int N = 10;
    int arr[N], i = 0;
    int* ptr = arr;

    while (n > 0) {
        int digit = n % 10;
        if (digit % m == 0) {
            *ptr = digit;
            ptr++;
            i++;
        }
        n /= 10;
    }

    cout << "Numbers, multiples " << m << ", Enters numbers: ";
    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j] << " ";
    }

    return 0;
}
