#include <iostream>
#include <iomanip>


int main() {
    double num{0},sum{0}, num_of_nums{0};
    while (std::cin >> num) {
        sum+= num;
        num_of_nums++;
    }
    std::cout << std::fixed << std::setprecision(2) << sum / num_of_nums << std::endl;
    return 0;
}