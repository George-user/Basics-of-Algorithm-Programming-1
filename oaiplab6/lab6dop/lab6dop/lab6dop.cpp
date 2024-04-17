#include <iostream>
using namespace std;

int main()
{
    int num, new_num = 0, x;
    cout << "Enter integer number: ";
    cin >> num;

    while (num != 0)
    {
        x = num % 10;
        if (x != 3 && x != 6)
        {
            new_num = new_num * 10 + x;
        }
        num /= 10;
    }

    cout << "Nunmer without number 3 and 6: " << new_num << endl;

    return 0;
}