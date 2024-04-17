
#include <iostream>


int main()
{
    using namespace std;

    double a, h = 0, d = 12.5e-4,t;

    for (int i = 1; i <= 5; i++)
    {
        cout << "Enter a = ";
        cin >> a;
        
        h += pow(a, 2);
    }

    h = h + d;
    cout << "h = " << h << endl;

    return 0;
}


