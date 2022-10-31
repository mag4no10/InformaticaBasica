#include <iostream>

int main() {

    unsigned int num{0};
    std::cin >> num;
    unsigned int hours = num/3600;
    unsigned int minute = (num % 3600)/60;
    unsigned int second = num - ((hours*3600) + (minute*60));

    std::cout << hours << " "<< minute << " " << second << std::endl;

    return 0;
}