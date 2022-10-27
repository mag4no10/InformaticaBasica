#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

    double number{0}, root{0}, total{0.0};
    int coefficient{0};
    std::cin >> root;
    while (std::cin >> number) {
        total = (number * pow(root,coefficient)) + total;
        coefficient++;
    }
    std::cout << std::fixed << std::setprecision(4) << total << std::endl;

    return 0;
}