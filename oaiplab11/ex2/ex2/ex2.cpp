#include <iostream>
using namespace std;

int main() {
    int a, b, n, m, p = 2, q = 3;
    cout << "Enter number A: ";
    cin >> a;
    cout << "Enter number B: ";
    cin >> b;
    cout << "Enter the number of bits to invert in number A: ";
    cin >> n;
    cout << "Enter the number of bits to replace in number B: ";
    cin >> m;

    int mask = (1 << n);
    mask <<= (p - n);
    a ^= mask;

    mask = (1 << m);
    mask <<= (q - m);
    b &= ~mask;
    b |= (a & ((1 << m))) << (q - m);

    cout << "Number A after inversion: " << a << endl;
    cout << "Number B after replacement:" << b << endl;

    return 0;
}
