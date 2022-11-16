#include <iostream>
#include <cmath>
#include <iomanip>

/**
 * @brief return the square of a number
 * 
 * @param number 
 * @return int 
 */
int Square(const int& number) {
    return (number*number);
}

/**
 * @brief return the square root of a number
 * 
 * @param number 
 * @return double 
 */
double SquareRoot(const int& number) {
    return sqrt(number);
}

int main() {
    int number{0};
    while (std::cin >> number){
        std::cout << std::fixed << std::setprecision(6) << Square(number) << " " << SquareRoot(number) <<
        std::endl;
    }
    return 0;
}