#include <iostream>


int main() {
    int num{0}, counter{0};
    while(std::cin >> num) {
        if (counter != 0) {
            std::cout << std::endl;
        }
        for(int i = 0; i < num; i++) {
            for(int j = 0; j < num; j++) {
                std::cout << num;
            }
            std::cout << std::endl;
        }
        counter++;
    }
    return 0;
}