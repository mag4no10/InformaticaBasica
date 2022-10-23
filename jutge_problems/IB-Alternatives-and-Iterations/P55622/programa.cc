#include <iostream>

int main() {

    unsigned int num{0};
    std::cin >> num;
    unsigned int num_copy = num, digits{0};
    if (num == 0) {
        std::cout << "The number of digits of " << num_copy << " is 1." << std::endl;
        return 0;
    }
    while (num != 0) {
        num /= 10;
        digits++;
    }
    std::cout << "The number of digits of " << num_copy << " is " << digits << "." << std::endl;
    return 0;
}