#include <iostream>

int main()
{
	using namespace std;
	
	int n,s, p, n1;
	double S = 0;
	cout << "Enter number of years: ";  //Введите количество лет
	cin >> n;
	cout << "Enter number %, by which the price of equipment decreases every year: "; //Введите число %, на которое снижается цена оборудования каждый год
	cin >> p;
	cout << "Enter amount of money for purchase:";   /*количество денег для закупки*/
	for ( n1 = 1; n1 <= n; n1++)
	{
		cin >> s;
		S = s + S - S * p / 100;
	}
	cout << "total cost of equipment for " << n << " years = " << S << endl;  /*общая стоимость оборудования*/
}       