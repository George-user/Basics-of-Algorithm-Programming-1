#include <iostream>


int main() {

    double m = 6,
        z = 5e-7,
        e = 5;
        double y = cos(5*m)/sin(0.4*m)*pow(10,2),
        w = 4*z*y-7*e*pow(10,-2*y);

    std::cout << y << std::endl;
    std::cout << w << std::endl;

    return 0;
}