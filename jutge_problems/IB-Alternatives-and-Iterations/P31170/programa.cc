#include <iostream>

int main() {

    int num{0};
    std::cin >> num;
    for(int i = 1; i <= 10; i++) {
        std::cout << num << "*" << i << " = " << num*i << std::endl;
    }

    return 0;
}