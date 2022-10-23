#include <iostream>

int main() {

    int num1{0},num2{0};
    std::cin >> num1 >> num2;
    if (num1 > num2) {
        std::cout << std::endl;
        return 0;
    }
    for(int i = num1; i <= num2; i++) {
        std::cout << i;
        if (i == num2) {
            break;
        }
        std::cout << ",";
    }
    std::cout << std::endl;

    return 0;
}