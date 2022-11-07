#include <iostream>

int main() {
    int num{0}, counter{0};
    std::string numbers = "0123456789";
    while(std::cin >> num) {
        for (int i = 0; i < num; i++) {
            if (counter != 0) {
                std::cout << std::endl;
            }
            int w{0};
            for(int j = 0; j < num; j++) {
                for (int k = 0; k < num; k++) {
                    std::cout << numbers[w];
                    w++;
                    if (w >= 10) {
                        w = 0;
                    }
                }
                std::cout << std::endl;
            }
            counter++;
        }
    }
    return 0;
}