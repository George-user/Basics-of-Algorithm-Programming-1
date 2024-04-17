#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;



int countMore(double* arr, int size, double C) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > C) {
            count++;
        }
    }
    return count;
}


double calculateProduct(double* arr, int size) {
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (abs(arr[i]) > abs(arr[maxIndex])) {
            maxIndex = i;
        }
    }

    double product = 1;
    for (int i = maxIndex + 1; i < size; i++) {
        product *= arr[i];
    }

    return product;
}

void convert(char* str) {
    int length = strlen(str);
    for (int i = 0; i < length; i++) {
        if (str[i] == ' ') {
            break;
        }
        str[i] = toupper(str[i]);
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    int choice;
    while (true)
    {
        cout << "ÿ: " << endl;
        cout << "1. ." << endl;
        cout << "2. ." << endl;
        cout << "3. ." << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << ": ";
            cin >> n;

            double* arr = new double[n];

            cout << ": ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            double C;
            cout << ": ";
            cin >> C;

            int count = countMore(arr, n, C);
            double product = calculateProduct(arr, n);

            cout << ": " << count << endl;
            cout << ": " << product << endl;

            delete[] arr;

            break;
        }
        case 2: {
            cin.ignore(); 

            const int MAX_LENGTH = 100;
            char str[MAX_LENGTH];

            cout << " ";
            cin.getline(str, MAX_LENGTH);

            convert(str);

            cout << " " << str << endl;

            break;
        }
        case 3:
            cout << "ÿ!" << endl;
            return 0;
        default:
            cout << "ÿ" << endl;
            break;
        }
    }
    return 0;
}