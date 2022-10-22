#include <iostream>

int main() {

    unsigned long long num1,num2;
    std::cin >> num1 >> num2;
    if (num1 < 0 || num2 < 0) {
        return 1;
    }

    std::cout << num1*num2 << std::endl;

    return 0;
}