#include <iostream>

int factorial(int n) {
    int factorial{1};
    for(int i = 1; i <= n; i++) {
        factorial = factorial * i;
    }
    return factorial;
}

int main() {
    int number{0};
    std::cin >> number;
    std::cout << factorial(number) << std::endl;
    return 0;
}