#include <iostream>

using namespace std;

int main()
{
    int const N = 100;
    int arr[N], n, i, j, k;
    cout << "Enter lenght of massive: ";
    cin >> n;
    cout << "Enter elemnt of massive: ";
    for (i = 0; i < n; i++)
        arr[i] = rand() % 100;
    cout << "Enter the value to be nedd dealite: ";
    cin >> k;
    for (i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            for (j = i; j < n; j++)
                arr[j] = arr[j + 1];
            n--;
            i--;
        }
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            for (j = n; j > i; j--)
                arr[j] = arr[j - 1];
            n++;
            arr[i] = 1;
            i++;
        }
    }
    cout << "Massive after dealite and additions: ";
    for (i = 0; i < n; i++)
        cout << arr[i];
    return 0;
}
