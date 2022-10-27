#include <iostream>
#include <cmath>
#include <iomanip>
#include <vector>

int main() {

    double number{0}, root{0}, total{0.0};
    int coefficient{0};
    std::cin >> root;
    std::vector<double> numbers;
    while (std::cin >> number) {
        numbers.push_back(number);
        coefficient++;
    }
    for (int i = 0; i < coefficient; i++) {
        total += numbers[i] * pow(root, coefficient - i - 1);
    }
    std::cout << std::fixed << std::setprecision(4) << total << std::endl;

    return 0;
}