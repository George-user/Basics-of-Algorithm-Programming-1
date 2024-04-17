#include <iostream>

int main() {

	using namespace std;

	float y, h, j=0.1,
		c = 2.1, r = 4e-4, m = 7;

	while (j < 1.8) {

		h = (10 * r - j) / (pow(c, 2) + exp(-m));
		y = (h * m - pow(j, 2)) + pow(0.1 * c, 2);

		cout << "h = " << h << endl;
		cout << "y = " << y << endl << endl;
		j = j + 0.1;
	}
	return 0;
}