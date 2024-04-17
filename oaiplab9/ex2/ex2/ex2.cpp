#include <iostream>
using namespace std;
int main() {

	double x, a = -1000, b = 1000, e = 0.0001;

		while (abs(a - b) > (2 * e)) {
			x = (a + b) / 2;

			if ((pow(x, 3) + x - 3) * (pow(a, 3) + a - 3) <= 0) {
				b = x;
	        }
			else {
				a = x;
			}
		}
	cout << "x = " << x << endl;
}