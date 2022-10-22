#include <iostream>

int main () {

    int dividendo{0}, divisor{0};

    std::cin >> dividendo;
    if (dividendo < 0) {return 1;}
    std::cin >> divisor;
    if (divisor< 0) {return 1;}

    int cociente = dividendo / divisor;
    int resto = dividendo % divisor;

    std::cout << cociente << " " << resto << std::endl;;

    return 0;
}