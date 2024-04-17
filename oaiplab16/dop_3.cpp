#include <iostream>
#include <windows.h>
using namespace std;

//1. Ввести вещественные числа в массив А[n, m](n, m > 0) и ко всем числам каждой строки  прибавить единицу.Если первый элемент 
// строки нулевой, ничего не делать.
//2. Дана строка.Все русские буквы привести к верхнему регистру, латинские заменить символом « ? ».Вывести результат на экран.

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
	cout << "Выберите задание (1 или 2): ";
	cin >> choise;

	switch (choise) {
	case 1: {

		int row, column;

		cout << "Введите размер строки: ";
		cin >> row;
		cout << "Введите размер колонки: ";
		cin >> column;

		int** arr = new int* [row];

		for (int i = 0; i < row; i++) {
			arr[i] = new int[column];
		}

		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << "Введите элемент массива [" << i << "][" << j << "]: ";
				cin >> arr[i][j];
			}
		}

		cout << "Исходный массив: " << endl;
		for (int i = 0; i < row; i++) {
			for (int j = 0; j < column; j++) {
				cout << arr[i][j];
			}
			cout << endl;
		}

		ex1(arr, row, column);

		cout << "Преобразованный массив: " << endl;
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
		cout << "Введите предложение: ";
		cin.ignore(); // очистка ввода перед вызовом функции getline
		cin.getline(str, 100); // считывает строку из ввода пользователя и сохраняет ее в переменной str

		ex2(str);

		cout << "Результат: " << str << endl;

		break;
	}

	default:
		cout << "Error";
		break;
	}
	return 0;
}