#include <iostream>

char intervalChecker(const int& a1, const int& b1, const int& a2, const int& b2) {
    if (a1 == a2 && b1 == b2) {
        return '=';
    }
    if (a1 >= a2 && b1 <= b2) {
        return '1';
    }
    if ((a1 < a2 && b1 >= b2) || (a1 <= a2 && b1 > b2)) {
        return '2';
    }
    return '?';
}

int main() {
    int intervalo_1_a{0},intervalo_1_b{0},intervalo_2_a{0},intervalo_2_b{0};
    std::cin >> intervalo_1_a >> intervalo_1_b >> intervalo_2_a >> intervalo_2_b;
    std::cout << intervalChecker(intervalo_1_a,intervalo_1_b,intervalo_2_a,intervalo_2_b) << std::endl;
    return 0;
}