#include <iostream>
using namespace std;

int main() {
    const int n = 10;
    double a[n];
    int* ptr;
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int negcount = 0;
    double minabs = abs(a[0]);
    int minindex = 0;


    if (!(ptr = (int*)malloc(a[n] * sizeof(int)))) {
        puts("Not enough memory");

    }
    else {
        cout << "Enough memory\n";

    }

    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            negcount++;
        }
        if (abs(a[i]) < minabs) {
            minabs = abs(a[i]);
            minindex = i;
        }
    }
    double sum = 0;
    for (int i = minindex + 1; i < n; i++) {
        sum += abs(a[i]);
    }
    
    cout << "Number of negative array elements: " << negcount << endl;
    cout << "The sum of the modules of the elements located after the element with the minimum modulus: " << sum << endl;
    free(ptr);

    return 0;

}
