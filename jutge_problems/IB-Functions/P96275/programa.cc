#include <iostream>

int absolute(int n) {
    return (n > 0 ? n : -n);
}

int main() {
    int number{0};
    std::cin >> number;
    std::cout << absolute(number) << std::endl;
    return 0;
}