#include <iostream>
#include <cstring>
#include <string>
#include <Windows.h>

using namespace std;

//1. Задан массив A из n чисел.Подсчитать, сколько раз встречается в нем максимальное число.
//2. Определить самое короткое и самое длинное слово в строке.


int countMax(int* arr, int size) {
    int maxNum = arr[0];
    int count = 0;

    for (int i = 1; i < size; i++) {
        if (arr[i] > maxNum) {
            maxNum = arr[i];
            count = 0;
        }

        if (arr[i] == maxNum) {
            count++;
        }
    }

    return count;
}

void findWords(const string& str, string& shortestWord, string& longestWord) {
    const char* delimiters = " \t\n.,:;?!"; // Строка разделителей

    size_t startPos = str.find_first_not_of(delimiters);
    size_t endPos = str.find_first_of(delimiters, startPos);

    if (startPos == string::npos || endPos == string::npos) {
        shortestWord = "";
        longestWord = "";
        return;
    }

    shortestWord = str.substr(startPos, endPos - startPos);
    longestWord = shortestWord;

    while (endPos != string::npos) {
        startPos = str.find_first_not_of(delimiters, endPos);
        endPos = str.find_first_of(delimiters, startPos);

        if (startPos != string::npos && endPos != string::npos) {
            std::string word = str.substr(startPos, endPos - startPos);

            if (word.length() < shortestWord.length()) {
                shortestWord = word;
            }

            if (word.length() > longestWord.length()) {
                longestWord = word;
            }
        }
    }
}

int main() {
    setlocale(LC_ALL, "ru");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    int choice;
    while (true)
    {


        cout << "Выберите программу для выполнения: " << endl;
        cout << "1. Первое задание." << endl;
        cout << "2. Второе задание." << endl;
        cout << "3. Выход из программы." << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "Введите размер массива: ";
            cin >> n;

            int* arr = new int[n];

            cout << "Введите элементы массива: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            int occurrences = countMax(arr, n);

            cout << "Количество максимальных чисел в массиве: " << occurrences << endl;

            delete[] arr;

            break;
        }
        case 2: {

            string str;
            cout << "Введите строку: ";
            cin.ignore(); // Очищаем буфер ввода

            getline(cin, str);

            string shortestWord;
            string longestWord;

            findWords(str, shortestWord, longestWord);

            cout << "Самое короткое слово: " << shortestWord << endl;
            cout << "Самое длинное слово: " << longestWord << endl;

            break;
        }
        case 3:
            cout << "До свидания!" << endl;
            return 0;
        default:
            cout << "Ошибка: неверный вариант использования" << endl;
            break;
        }
    }
    return 0;
}