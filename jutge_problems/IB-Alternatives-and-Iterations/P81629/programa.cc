#include <iostream>


int main () {
    int euros, centimos;
    std::cin >> euros >> centimos;
    int monedas[] = {1, 2, 5, 10, 20, 50};
    int billetes[] = {5, 10, 20, 50, 100, 200, 500};
    int i = 7;
    while (i--) {
        std::cout << "Banknotes of " << billetes[i] << " euros: " << euros/billetes[i] << std::endl;
        if (euros >= billetes[i]) {
            euros%=billetes[i];
        }
    }
    std::cout << "Coins of " << 2 << " euros: " << euros/2 << std::endl;
    if (euros >= 2) {
        euros %= 2;
    }
    std::cout << "Coins of " << 1 << " euro: " << euros << std::endl;
    i = 6;
    while (i--) {
        if (i != 0) {
            std::cout << "Coins of " << monedas[i] << " cents: " << centimos/monedas[i] << std::endl;
        } else {
            std::cout << "Coins of " << monedas[i] << " cent: " << centimos/monedas[i] << std::endl;
        }
        if (centimos >= monedas[i]) {
            centimos%=monedas[i];
        }
    }
}