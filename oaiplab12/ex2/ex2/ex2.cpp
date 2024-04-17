#include <iostream>
using namespace std;

int main()
{
    int arr1[10] = { 1, 2, 3, 4, 50, 6, 7, 8, 9, 10 };
    int arr2[10] = { 2, 4, 6, 8, 10, 12, 14, 16, 18, 50 };
    int* p1 = arr1;
    int* p2 = arr2;
    int max = 0;

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (*p1 == *p2)
            {
                break;
            }
            p2++;
            if (j == 9)
            {
                if (*p1 > max)
                {
                    max = *p1;
                }
            }
        }
        p1++;
        p2 = arr2;
    }

    cout << "The largest number in the first array that is not in the second array: " << max << endl;

    return 0;
}

