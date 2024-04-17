#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cout << "Enter the number of rows and columns of the matrix: ";
    cin >> n >> m;

    int** matrix = new int* [n];
    for (int i = 0; i < n; i++)
    {
        matrix[i] = new int[m];
    }

    cout << "Enter the matrix elements: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    bool flag = true;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++) {

            if (matrix[i][j] <= 0)

            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            for (int k = 0; k < n; k++)
            {
                for (int j = 0; j < m; j++) {
                    matrix[k][j - 1] *= -1;

                }


            }
            break;
        }
        flag = true;
    }
    if (flag)
    {

        cout << "The signs of the elements in the previous column are reversed." << endl;
    }
    else
    {
        cout << "In the first column, not all elements are positive." << endl;
    }

    cout << "Matrix after changing the signs of the elements of the previous column: " << endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        delete[] matrix[i];
    }
    delete[] matrix;

    return 0;
}

