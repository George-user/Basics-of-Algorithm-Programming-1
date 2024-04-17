#include <iostream>
using namespace std;

int main()
{
    char arr[100], digits[100], others[100];
    int n, i, j = 0, k = 0;
    cout << "Enter length of massive: ";
    cin >> n;
    cout << "Enter element of massive: ";
    for (i = 0; i < n; i++)
        cin >>arr[i];
    for (i = 0; i < n; i++)
    {
        if (arr[i] >= '0' && arr[i] <= '9')
        {
            digits[j] = arr[i];
            j++;
        }
        else
        {
            others[k] = arr[i];
            k++;
        }
    }
    cout << "Massive digits include these numbers: ";
    for (i = 0; i < j; i++)
        cout << digits[i];
    cout << endl;
    cout << "Massive others include these symbols: ";
    for (i = 0; i < k; i++)
        cout << others[i];
    cout << endl;
    return 0;
}