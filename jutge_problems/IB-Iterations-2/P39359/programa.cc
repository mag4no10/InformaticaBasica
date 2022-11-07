#include <iostream>

int main() {
    int num{0}, counter{0}, k{0};
    std::string numbers = "0123456789";
    while(std::cin >> num) {
        if (counter != 0) {
            std::cout << std::endl;
        }
        for(int i = 0; i < num; i++) {
            for (int j = 0; j < num; j++) {
                std::cout << numbers[k];
                k++;
                if (k >= 10) {
                    k = 0;
                }
            }
            std::cout << std::endl;
        }
        counter++;
    }
    return 0;
}