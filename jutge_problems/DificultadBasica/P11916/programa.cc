#include <iostream>
#include <iomanip>

double aproximation_e(const unsigned int& num) {
    double result{1}, division{0}, numerador{1}, factorial{1};
    if (num == 0) {
        result = 0;
        return result;
    }
    for (int i = 1; i < num; i++) {
        factorial *= i;
        division = numerador / factorial;
        result += division;
    }
    return result;

}

int main() {    
    unsigned int num;
    while (std::cin >> num) {
        if (num > 20) { 
            return 1;
        }
        std::cout << std::fixed << std::setprecision(10); 
        std::cout << "With " << num << " term(s) we get " << aproximation_e(num) << "." << std::endl;
    }
    return 0;
}