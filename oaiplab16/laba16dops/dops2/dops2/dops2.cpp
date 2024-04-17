//3
#include <iostream>
#include <windows.h>
using namespace std;



void ex1(int** arr, int row, int column) {
	for (int i = 0; i < row; i++) {
		if (arr[i][0] != 0) {
			for (int j = 0; j < column; j++) {
				arr[i][j] = arr[i][j] + 1;
			}
		}
	}
}

void ex2(char* str) {
	for (int i = 0; i < 100; i++) {
		unsigned char c = str[i];
		if (c >= 192 && c <= 255) {
			str[i] = toupper(c);
		}
		else if (c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z') {
			str[i] = '?';
		}
	}
}

int main() {
	setlocale(LC_CTYPE, "Russian");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int choise;
	cout << "Âűáĺđčňĺ çŕäŕíčĺ (1 čëč 2): ";
	cin >> choise;

	switch (choise) {
	case 1: {

		int row, column;

		cout << "Ââĺäčňĺ đŕçěĺđ ńňđîęč: ";
		cin >> row;
		cout << "Ââĺäčňĺ đŕçěĺđ ęîëîíęč: ";
		cin >> column;

		int** arr = new int* [row];

		for (int i = 0; i < row; i++) {
			arr[i] = new int[column];
		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << " [" << i << "][" << j << "]: ";
				cin >> arr[i][j];
			}
		}

		cout << ": " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}

		ex1(arr, row, column);

		cout << ": " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}

		for (int i = 0; i < row; i++) {
			delete[] arr[i];
		}
		delete[] arr;
		break;
	}
	case 2: {
		char str[100];
		cout << " : ";
		cin.ignore(); 
		cin.getline(str, 100); 

		ex2(str);

		cout << ": " << str << endl;

		break;
	}

	default:
		cout << "Error";
		break;
	}
	return 0;
}
//