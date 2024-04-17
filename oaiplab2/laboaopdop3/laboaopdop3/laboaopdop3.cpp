#include <iostream>
#include <cmath>

int main() {

    double  a = 1.5,
            b = -8.1,
            j = 4,
        t1 = 4 * pow(10, -8);
        double s = sqrt(t1 * a / t1 + 1) + 4 * exp(2 * b),
               w = s * a / (1 + 0.1 * a),
            v = s + j * sqrt(a * a + b * b);

    std::cout << s << std::endl;
    std::cout << w << std::endl;
    std::cout << v << std::endl;

    return 0;
}
