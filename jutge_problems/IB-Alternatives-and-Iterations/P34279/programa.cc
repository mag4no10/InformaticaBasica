#include <iostream>


const int clock (unsigned int& hora, unsigned int& minuto, unsigned int& segundo) {

    if (segundo == 60) {
        segundo = 0;
        minuto++;
        if (minuto == 60) {
            minuto = 0;
            hora++;
            if (hora == 24) {
                hora = 0;
                minuto = 0;
                segundo = 0;
            }
        }
    }
    return hora,minuto,segundo;
}

int main () {
    unsigned int hora{0},minuto{0},segundo{0};
    std::cin >> hora; 
    if (hora > 23) {return 1;}
    std::cin >> minuto; 
    if (minuto > 59) {return 1;}
    std::cin >> segundo; 
    if (segundo > 59) {return 1;}
    segundo++;
    clock(hora,minuto,segundo);
    if (hora < 10) {
        std::cout << "0";
    }
    std::cout << hora << ":";
    if (minuto < 10) {
        std::cout << "0";
    }
    std::cout << minuto << ":";
    if (segundo < 10) {
        std::cout << "0";
    }
    std::cout << segundo << std::endl;
    return 0;
}