#include <iostream>
int main()
{
	using namespace std;

	double fcash, drevcash;
	int x;
	cout << "Enter sum the first cash  = ";
	cin >> fcash;
	cout << "Enter desired revenue value  = "; /*сколько хотите заработать*/
	cin >> drevcash;
	if (fcash >= drevcash)
	{
		cout << "Enter is not correct " << endl; /*Данные введены некоректно */
	}
	for (x=0; fcash <= drevcash; x++)
	{
		fcash += fcash * 3 / 100;
	}
	cout << "Day: " << x << endl;
	cout << "Revenue: " << fcash << endl;   /* Доход */
	return 0;
}