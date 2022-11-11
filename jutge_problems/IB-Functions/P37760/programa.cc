#include <iostream>
#include <cmath>
#include <iomanip>

int main() {
    double num_degrees{0.0};
    while (std::cin >> num_degrees) {
        double num_radians = (num_degrees*M_PI/180); 
        std::cout << std::fixed << std::setprecision(6) << std::sin(num_radians) << " " << std::cos(num_radians) << 
        std::endl;
    }
    return 0;
}