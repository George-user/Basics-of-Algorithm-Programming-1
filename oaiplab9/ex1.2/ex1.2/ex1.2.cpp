#include <iostream>
using namespace std;


int main()
{
	 
	double h, x, s1 = 0, s2 = 0, s, a = 1, b = 3;
	int  n = 200, i = 1;
	h = (b - a) / (2 * n);
	x = a + 2 * h;
	for (; i < n; i++)
	{
		s2 += pow(x, 3) - 3;
		x += h;
		s1 += pow(x, 3) - 3;
		x += h;
	}
	s = (h / 3) * (pow(a, 3) - 3 + 4 * (pow(a + h, 3) - 3) + 4 * s1 + 2 * s2 +(pow(b, 3) - 3));
	cout << "s = " << s << endl;
}