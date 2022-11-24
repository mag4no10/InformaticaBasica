#include <iostream>

int double_factorial(int x) {
    if (x == 0 || x==1) {
        return 1;
    }
    return x*double_factorial(x-2);
}

int main() {
    int number{0};
    std::cin >> number;
    std::cout << double_factorial(number) << std::endl;
    return 0;
}