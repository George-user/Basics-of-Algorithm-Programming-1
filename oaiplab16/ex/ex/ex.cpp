#include <iostream>
using namespace std;
void initArr(int** A, int n, int m);

int main()
{
    int choice;
    cout << "Select the program you want to run: " << endl;
    cout << "1" << endl;
    cout << "2" << endl;
    cin >> choice;

    switch (choice)
    {
    case 1:
    {
        int n, m;
        cout << "Enter the number of rows and columns: ";
        cin >> n >> m;

        int** A = new int* [n];
        for (int i = 0; i < n; i++)
            A[i] = new int[m];

        initArr(A, n, m);

        cout << "The array after replacing negative elements in odd rows with equally positive ones: " << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        for (int i = 0; i < n; i++)
            delete[] A[i];
        delete[] A;

        break;
    }
    case 2:
    {
        char str[100];
        cout << "Enter a string consisting of capital letters only: ";
        cin >> str;

        int len = strlen(str);
        bool capitalize = true;

        for (int i = 0; i < len; i++)
        {
            if (str[i] == '.' || str[i] == ' ')
            {
                capitalize = true;
            }
            else if (capitalize && (str[i] >= 'a' && str[i] <= 'z'))
            {
                str[i] = toupper(str[i]);
                capitalize = false;
            }
            else
            {
                str[i] = tolower(str[i]);
            }
        }

        cout << "Converted string: " << str << endl;

        break;
    }
    default:
    {
        cout << "Incorrect choice." << endl;
        break;
    }
    }
    return 0;
}
void initArr(int** A, int n, int m) {
    cout << "Enter Array Elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> A[i][j];
        }
    }

    for (int i = 0; i < n; i += 2)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i][j] < 0)
                A[i][j] = -A[i][j];
        }
    }
}