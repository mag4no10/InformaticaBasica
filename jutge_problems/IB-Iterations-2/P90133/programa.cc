#include <iostream>
#include <cmath>
#include <iomanip>

int log_a_to_base_b(const int& a, const int& b) {
    return (a > (b-1)) ? 1 + log_a_to_base_b(a / b, b) : 0;
}

int main() {
    int base{0}, num{0};
    while (std::cin >> base >> num) {
        if (base < 2 || num < 1) {
            return 1;
        }
        std::cout << log_a_to_base_b(num,base) << std::endl;
    }
    return 0;
}