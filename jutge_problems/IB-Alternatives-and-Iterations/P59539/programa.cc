#include <iostream>
#include <iomanip>

int main() {

    unsigned int num{0};
    double sum{0.0};
    std::cin >> num;
    for(double i = 1; i <= num; i++) {
        sum += 1.0/i;
    }
    std::cout << std::fixed << std::setprecision(4) << sum << std::endl;

    return 0;
}