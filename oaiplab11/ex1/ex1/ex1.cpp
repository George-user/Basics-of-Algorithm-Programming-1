#include <iostream>
using namespace std;

int main() {
    int A;
    cin >> A;
    int count = 0;
    for (int i = 2; i <= 13; i++) {
        if ((A & (1 << i)) == 0) {
            count++;
        }
    }
    cout << "Count if null in number A from the third bit to the 13th bit inclusive: " << count << endl;
    return 0;
}
