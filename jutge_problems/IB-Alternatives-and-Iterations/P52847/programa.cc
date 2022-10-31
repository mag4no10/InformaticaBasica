#include <iostream>


int main () {
    int num1{0},num2{0},num3{0};
    std::cin >> num1 >> num2 >> num3;
    int max = num1;
    if(num2 > num1) {
        max = num2;
        if (num3 > num2) {
            max = num3;
        }
    }
    if (num3 > num1) {
        max = num3;
        if (num2 > num3) {
            max = num2;
        }
    }
    std::cout << max << std::endl;
    return 0;
}