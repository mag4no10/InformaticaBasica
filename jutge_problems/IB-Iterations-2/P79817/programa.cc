#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    int num{0},power{0};
    while (std::cin >> num >> power) {
        std::cout << std::fixed << std::setprecision(0) << pow(num,power) << std::endl;
    }
    return 0;
}