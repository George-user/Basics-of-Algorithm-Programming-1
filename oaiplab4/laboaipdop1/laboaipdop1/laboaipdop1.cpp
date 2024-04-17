

#include <iostream>

using namespace std;

int main() {
    double r, p, q;
    cout << "Radius: ";
    cin >> r;
    cout << "First diagonal: ";
    cin >> p;
    cout << "Second diagonal: ";
    cin >> q;

    double d = sqrt(p * p + q * q);
    string result = (2 * r <= d) ? "Yes" : "No";
    cout << "Result: " << result << endl;

    return 0;
}

