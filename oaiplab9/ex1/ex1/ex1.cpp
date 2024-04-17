#include <iostream>
using namespace std;
int main()
{
	double h, x, s = 0, a = 1, b = 3;
	int n = 200;

	h = (b - a) / n;
	x = a;

	for (; x <= b - h; x += h)
	{
		s += h * (pow(x, 3) - 3 + pow(x + h, 3) - 3) / 2;
	}

	cout << "s = " << s << endl;
}