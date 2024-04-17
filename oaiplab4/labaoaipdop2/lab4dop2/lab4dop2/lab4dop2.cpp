#include <iostream>
using namespace std;

int main() {
    int a, b, c, r, s, t;
    cout << "Enter box dimensions (a, b, c): ";
    cin >> a >> b >> c;
    cout << "Enter parcel dimensions (r, s, t): ";
    cin >> r >> s >> t;

    if (a>0,a <= r && b <= s && c <= t) {
        cout << "The box can be packed into a parcel." << endl;
    }
    else {
        cout << "The box cannot be packed in a parcel." << endl;
    }

    return 0;
}
