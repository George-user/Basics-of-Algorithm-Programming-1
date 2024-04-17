

#include <iostream>
using namespace std;

int main() {
    for (int i = 102; i <= 987; i++) {
        int a = i / 100;
        int b = (i / 10) % 10;
        int c = i % 10;
        if (a != b && a != c && b != c) {
            cout << i << endl;
        }
    }
    return 0;
}

