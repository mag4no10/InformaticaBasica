#include <iostream>
#include <iomanip>

double SubstractHarmonic(const unsigned int& num1, unsigned int& num2) {
    double resta{0.0};
    num2++;
    while(num2 <= num1) {
        resta += 1.0/num2;
        num2++;
    }
    return resta;
}

int main() {
    unsigned int num1{0}, num2{0};
    while (std::cin >> num1 >> num2) {
        if (num2 > num1) {
            return 1;
        }
        std::cout << std::fixed << std::setprecision(10) << SubstractHarmonic(num1,num2) << std::endl;
    }
    return 0;
}