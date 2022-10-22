#include <iostream>
#include <math.h>

int main() {

    int dividendo{0};
    int divisor{0};
    std::cin >> dividendo >> divisor;
    if (divisor < 0) {
        return 1;
    }
    if (dividendo == 0) {
        std::cout << "0 0" << std::endl;
        return 0;
    }
    int cociente = dividendo / divisor;
    int resto = dividendo % divisor;
    if (resto < 0) {
        cociente--;
        resto += divisor;
    }

    std::cout << cociente << " " << resto << std::endl;;

    return 0;
}