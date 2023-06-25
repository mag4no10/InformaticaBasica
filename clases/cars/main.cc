#include <iostream>
#include <iomanip>
#include <fstream>

#include "cars.h"

void PrintProgramInformation() {
    std::cout << "Any program should start its execution with an informative message" << std::endl;
    std::cout << "(like this) that informs the user about the purpose of the program." << std::endl;
    std::cout << "After printing that message, the program should check that the user" << std::endl;
    std::cout << "has provided the correct number of parameters to the program." << std::endl << std::endl;
}

bool CheckCorrectParams(int argc, char* argv[], const int& kCorrectNumber) {
    if (argc != kCorrectNumber) {
        std::cout << "mal" << std::endl;
        return false;
    }
    return true;
}

int main(int argc, char* argv[]) {
    PrintProgramInformation();
    if (!CheckCorrectParams(argc,argv,3)) {
        return EXIT_FAILURE;
    }

    Complex complejo1(1.5,5), complejo2(1,2), complejo3;
 
    std::cout << complejo1 << "i + " << complejo2 << "i = " << complejo1 + complejo2 << "i" << std::endl;
    std::cout << complejo3 << "i" << std::endl;

    if (!(complejo1 == complejo3)) {
        std::cout << "hola" << std::endl;
        std::cout << std::fixed << std::setprecision(2) << complejo2.modulo();
    }

    std::cout << complejo1 << "i - " << complejo2 << "i = " << complejo1 - complejo2 << "i" << std::endl;

    std::fstream file("output.txt");
    if (!file.is_open()) {
        std::cerr << "Cant open output.txt";
        exit(EXIT_FAILURE);
    }
    file << complejo1;
    file << complejo2;
    file << std::endl;
    file << complejo3;
    file.close();

    return EXIT_SUCCESS;
}