#include <iostream>

int main() {
    int m, n, p;
    int count = 0;

    std::cout << "Enter three numbers: ";
    std::cin >> m >> n >> p;

    if (m < 0) {
        ++count;
    }
    if (n < 0) {
        count++;
    }
    if (p < 0) {
        count++;
    }

    std::cout << "Number of negative numbers: " << count << std::endl;

    return 0;
}