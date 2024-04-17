

#include <iostream>


int main()
{
	using namespace std;
	
	int n, t, sum = 0;
	cout << "How many elements does the sequence have? ";//Из скольки элементов дана последовательность?
	cin >> t;
	for (int a = 1; a <= n; a++)
	{
		cout << "Enter x = ";
		cin >> t;
		if (t % 2 == 0)
		{
			sum += t;
		}
	}
	cout << "Sum of even elements = " << sum;
	return (0);
}
