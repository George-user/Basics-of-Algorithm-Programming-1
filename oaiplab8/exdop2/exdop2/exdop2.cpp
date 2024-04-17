#include <iostream>
using namespace std;

int main() {
    int n, a;
    cin >> n;
    for (int i = n; i >= 1; i--) {
        cin >> a;
        if (a < 0) {
            cout << i << endl;
            return 0;
        }
    }
    cout << "There is no negative element in the sequence." << endl;
    return 0;
}