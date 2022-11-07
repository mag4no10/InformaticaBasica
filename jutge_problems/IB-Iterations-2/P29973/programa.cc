#include <iostream>

int main() {
    unsigned int num{0};
    std::cin >> num;
    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "*";
        }
        std::cout << std::endl;        
    }
    return 0;
}