#include <iostream>
#include <iomanip>
#include <math.h> //included due to the bug related to pi digits approximation


int main() {

    unsigned int num_of_figures{0};
    std::cin >> num_of_figures;
    if(num_of_figures == 0) {
        return 0;
    }
    std::string type;
    double lenght{0}, width{0}, radius{0};
    const double pi = atan(1)*4;
    for (int i = 0; i < num_of_figures; i++) {
        std::cin >> type;
        if (type == "rectangle") {
            std::cin >> lenght >> width;

            std::cout << std::fixed << std::setprecision(6);
            std::cout << lenght*width << std::endl;
        }
        else if (type == "circle") {
            std::cin >> radius;
            
            std::cout << std::fixed << std::setprecision(6);
            std::cout << pi * pow(radius,2) << std::endl;
        }
    }
    return 0;
}