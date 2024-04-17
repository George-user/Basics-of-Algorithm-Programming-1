#include <iostream>
using namespace std;

int main() {

    


    float y, h, j = 0.1, 
        c = 2.1, r = 4e-4, m = 7;

	for (int n = 0; n < 4; n++) {
		cout << " j = ";
		cin >> j;



		for (float m = 1; m <= 2; m += 0.5) {

			h = (10 * r - j) / (pow(c, 2) + exp(-m));
			y = (h * m - pow(j, 2)) + pow(0.1 * c, 2);



			cout << "h = " << h << endl;
			cout << "y = " << y << endl << endl;
		}
    }
    return 0;
}