#include <iostream>

int GetProduct(int number) {
    int product{1};
    if (number == 0) {
        return product = 0;
    }
    while(number != 0) {
        product *= (number % 10);
        number /= 10;
    }
    return product;
}

int main() {
    int num{0};
    while (std::cin >> num) {
        int product_of_digits{GetProduct(num)};
        std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << 
        std::endl;
        while (product_of_digits >= 10) {
            num = product_of_digits;
            product_of_digits = GetProduct(num);
            std::cout << "The product of the digits of " << num << " is " << product_of_digits << "." << 
            std::endl;
        }
        std::cout << "----------" << std::endl;
    }
    return 0;
}