#include <iostream>

int main() {

    int num1{0}, num2{0}, aux;
    std::cin >> num1 >> num2;
    if (num1 < num2) {
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    for (int i = num1; i >= num2; i--) {
        std::cout << i << std::endl;
    }

    return 0;
}