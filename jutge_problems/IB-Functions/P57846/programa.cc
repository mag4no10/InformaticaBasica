#include <iostream>

int max2(int a, int b) {
    return (a > b ? a : b);
}

int main() {
    int a{0}, b{0};
    std::cin >> a >> b;
    std::cout << max2(a,b) << std::endl;
    return 0;
}