#include <iostream>
#include <cstring>
#include <string>
#include <Windows.h>

using namespace std;

//1. ����� ������ A �� n �����.����������, ������� ��� ����������� � ��� ������������ �����.
//2. ���������� ����� �������� � ����� ������� ����� � ������.


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
    const char* delimiters = " \t\n.,:;?!"; // ������ ������������

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


        cout << "�������� ��������� ��� ����������: " << endl;
        cout << "1. ������ �������." << endl;
        cout << "2. ������ �������." << endl;
        cout << "3. ����� �� ���������." << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            int n;
            cout << "������� ������ �������: ";
            cin >> n;

            int* arr = new int[n];

            cout << "������� �������� �������: ";
            for (int i = 0; i < n; i++) {
                cin >> arr[i];
            }

            int occurrences = countMax(arr, n);

            cout << "���������� ������������ ����� � �������: " << occurrences << endl;

            delete[] arr;

            break;
        }
        case 2: {

            string str;
            cout << "������� ������: ";
            cin.ignore(); // ������� ����� �����

            getline(cin, str);

            string shortestWord;
            string longestWord;

            findWords(str, shortestWord, longestWord);

            cout << "����� �������� �����: " << shortestWord << endl;
            cout << "����� ������� �����: " << longestWord << endl;

            break;
        }
        case 3:
            cout << "�� ��������!" << endl;
            return 0;
        default:
            cout << "������: �������� ������� �������������" << endl;
            break;
        }
    }
    return 0;
}