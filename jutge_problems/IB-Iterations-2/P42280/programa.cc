#include <iostream>

int main() {
    int row{0}, column{0};
    while (std::cin >> row >> column) {
        int sum{0};
        char num{0};
        for (int i = 0; i < row*column; i++) {
            std::cin >> num;
            sum += static_cast<int>(num - '0');
        }
        std::cout << sum << std::endl;
    }
    return 0;
}