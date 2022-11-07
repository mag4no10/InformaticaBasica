#include <iostream>

int collatz(int &num) {
    int i{0};
    while (num != 1) {
        if (num % 2 == 0) {
            num = num/2;
        } else {
            num = ((num * 3) + 1);
        }
        i++;
    }
    return i;
}

int main() {
    int num{0};
    while (std::cin >> num) {
        std::cout << collatz(num) << std::endl;
    }
    return 0;
}