#include <iostream>
#include <algorithm>

int main() {

    unsigned num1{0}, num2{0};
    std::cin >> num1 >> num2;
    std::cout << "The gcd of " << num1 << " and " << num2 << " is " << std::__gcd(num1,num2) << "." << std::endl;

    return 0;
}