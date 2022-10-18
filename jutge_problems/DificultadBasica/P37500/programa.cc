#include <iostream>

int main() {
    unsigned int numero{0};
    std::cin >> numero;
    if (numero < 0) { 
        return 1;
    }
    for (int i = 0; i < numero + 1; i++) {
        std::cout << i << std::endl;
    }

    return 0;
}