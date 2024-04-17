#include <iostream>

using namespace std;

int main() {
	
	char string[] = "HOW DO YOU DO";
	int symbol = 0,
		word = 0;

	char change[100];
	for (int i = 0, num = 0; i < strlen(string); i += symbol + 1, symbol = 0) {
		for (int j = i; ; j++) {
			symbol++;
			if (string[j + 1] == ' ' || string[j + 1] == '\0') {
				word++;
				break;
			}
		}
		if (word % 2 == 1)
			continue;
		else
			for (int j = i + symbol - 1; j >= i; j--, num++) {
				change[num] = string[j];
				if (symbol - 1 == num)
					change[++num] = ' ';
			}
		if (word == 4) {
			change[num] = '\0';
		}
	}
	cout << change;
}