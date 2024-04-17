#include <iostream>


int main() {

    double  n = 2,
            b = -0.12,
            x = 1.3 * pow(10, -4),
             e = 3;
        double z = 1/(x-1)+sin(x)-sqrt(n),
              y = pow(e, -b)/2*z;

    std::cout << z << std::endl;
    std::cout << y << std::endl;

    return 0;
}
*/