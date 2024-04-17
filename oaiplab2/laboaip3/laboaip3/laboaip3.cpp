#include <iostream>


int main() {
    
    double k = 4,
           x = 2 * pow(10,-4),
           a = 8.1;

    double t = 2 * k / a + log(2 + x),
           u = sqrt(k - 1) / (t + 1);
    std::cout << t << std::endl;
    std::cout << u << std::endl;

    return 0;
}