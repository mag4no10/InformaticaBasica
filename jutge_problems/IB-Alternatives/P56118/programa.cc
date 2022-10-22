#include <iostream>

int main() {

    int max{0},min{0},aux{0};
    std::cin >> max >> min;

    if (min > max) {
        aux = max;
        max = min;
        min = max;
    }
    std::cout << max << std::endl;

    return 0;
}