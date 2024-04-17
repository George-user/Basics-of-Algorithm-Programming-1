#include <iostream>
#include <cmath>

int main() {

    double t = 6,
        y = -1.2,
        x = 0.4 * pow(10, 6),
        double p = 2.6 * t + cos(y / (3 * x + y)),
        q = (sin(1) * t / cos(t) * t);

    std::cout << t << std::endl;
    std::cout << q << std::endl;

    return 0;
}