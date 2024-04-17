#include <iostream>
using namespace std;

int sumbetweenmaxmin(int* arr, int size) {
    int sum = 0;
    int maxindex = 0;
    int minindex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[maxindex]) {
            maxindex = i;
        }
        if (arr[i] <= arr[minindex]) {
            minindex = i;
        }
    }
    if (maxindex > minindex) {
        int temp = maxindex;
        maxindex = minindex;
        minindex = temp;
    }
    sum = 0;
    for (int i = maxindex + 1; i < minindex; i++) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumbetweenmaxmin(arr, size);
   
    cout << "Sum between first maximum and last minimum: " << sum << endl;
    return 0;
}
