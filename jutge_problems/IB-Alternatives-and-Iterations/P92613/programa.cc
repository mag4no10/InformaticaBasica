#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double numero{0.0};
    std::cin >> numero;
    std::cout << std::fixed << std::setprecision(0) << std::floor(numero) << " " << std::ceil(numero) << \
    " " << std::round(numero) << std::endl;
    return 0;
}