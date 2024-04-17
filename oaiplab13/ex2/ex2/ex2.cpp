#include <iostream>
#include <string>
using namespace std;

int main() {


    string inputString;  
    cout << "Введите строку, состоящую из групп нулей и единиц: ";
    getline(cin, inputString);

    char* currentGroupStart = &inputString[0];
    int groupsWithFiveSymbols = 0; // количество групп с пятью символами
    int currentGroupLength = 1; // длина текущей группы

    
    for (char* ptr = &inputString[0]; *ptr != '\0'; ptr++) {
        if (*ptr == *(ptr + 1)) {
            currentGroupLength++;
        }
        else {
            if (currentGroupLength == 5) {
                groupsWithFiveSymbols++;
            }
            currentGroupLength = 1;
        }
    }

    cout << "Количество групп с пятью символами: " << groupsWithFiveSymbols << endl;

    return 0;
}
