#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Select a topic for dialogue: \n";
    cout << "1. Weather\n";
    cout << "2. Sport\n";
    cout << "3. Eat\n";
    cout << "4. Traveling\n";
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "What's the weather like today?\n";
        break;
    case 2:
        cout << "What is your favourite sport?\n";
        break;
    case 3:
        cout << "What is your favourite dish?\n";
        break;
    case 4:
        cout << "What countries have you visited?\n";
        break;
    default:
        cout << "Sorry, I can't understand your choice.\n";
        break;
    }

    return 0;
}
