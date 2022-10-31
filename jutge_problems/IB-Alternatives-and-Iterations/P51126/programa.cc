#include <iostream>

int main() {
    int intervalo_1_a{0},intervalo_1_b{0},intervalo_2_a{0},intervalo_2_b{0};
    std::cin >> intervalo_1_a >> intervalo_1_b >> intervalo_2_a >> intervalo_2_b;
    int pequenyo = std::max(intervalo_1_a,intervalo_2_a);
    int grande = std::min(intervalo_1_b,intervalo_2_b);
    if (pequenyo > grande) {
        std::cout << "[]" << std::endl;
        return 0;
    }
    std::cout << "[" << pequenyo << "," << grande << "]" << std::endl;
    return 0;
}