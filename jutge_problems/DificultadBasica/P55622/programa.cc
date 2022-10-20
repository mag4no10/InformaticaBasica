#include <iostream>

int main() {

    unsigned int numero{0};
    std::cin >> numero;
    if (numero < 0) {
        return 1;
    }
    unsigned int numero_copy{numero};
    if (numero == 0) {
        std::cout << "The number of digits of " << numero_copy << " is 1." << std::endl;
        return 0;
    }
    int counter{0};
    while (numero != 0) {
        numero = numero/10;
        counter++;
    }
    std::cout << "The number of digits of " << numero_copy << " is " << counter << "." << std::endl; 

    return 0;
}