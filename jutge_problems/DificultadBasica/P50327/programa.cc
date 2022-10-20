#include <iostream>
#include <algorithm>

int main() {


    std::string numero;
    std::string numero_copy = numero;
    std::cin >> numero;
    std::reverse(numero.begin(),numero.end());

    std::cout << numero << std::endl;

    return 0;
}