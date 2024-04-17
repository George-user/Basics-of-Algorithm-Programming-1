// labex1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//



#include <iostream>

int main()
{
    using namespace std;

    double a = 1.774, m = 5, x = 3, y, z;
    while (x <= 5) {
        y = a + pow(m, 2) * pow(x, 2) / (a + x) * m;
        if (abs(y) < 1)
        {
            z = y + 1;
        }
        else if (abs(y) >= 1)
            z = pow(sin(y), 2);
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
        cout << " " << endl;
        x = x + 0.2;
    }

	return (0);
}
