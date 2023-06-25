#include <iostream>
#include <array>
#include <vector>

int main() {
    std::array<int,5> numeros = {1,2,3,4,5};
    for (const auto& i : numeros) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}