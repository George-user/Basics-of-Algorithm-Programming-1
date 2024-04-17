#include <windows.h>
#include <iostream>
using namespace std;
unsigned char code1;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	const int n = 100;
	int size, code[n], a;
	cout << "Enter of the number digit: ";
	cin >> size;

	for (int i = 0; i < size; i++) {
		cout << "Enter symbol: ";
		cin >> code1;
		code[i] = code1;
	}

	for (int i = 0; i < size; i++) {
		code1 = code[i];
		if (code1 >= 'A' && code1 <= 'z')
		{
			printf("This latinic word %c, kod ASCII =  %X", code1, code1);
			cout << endl;
			int dif = code[1] - code[0];
			cout << dif;
		}
		else if (code1 >= 0xc0 && code1 <= 0xff)
		{
			printf("This russian word %c, kod Windows-1251 =  %x", code1, code1);
			cout << endl;
			int dif = code[1] - code[0];
			cout << dif;
		}
		else if (code1 >= '0' && code1 <= '9')
		{
			printf("This number %c, kod ASCII =  %x", code1, code1);
			cout << endl;
		}
		else
		{
			printf("Error");
		}
	}

	return 0;
}