#include <iostream>

int main() {

    int num{0};
    std::cin >> num;
    for(int i = 0; i <= num; i++) {
        std::cout << i*i*i;
        if(i == num) {
            break;
        }
        std::cout << ",";
    }
    std::cout << std::endl;

    return 0;
}