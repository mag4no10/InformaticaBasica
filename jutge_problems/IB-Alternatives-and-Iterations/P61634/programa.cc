#include <iostream>

bool leapYear(const int& year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    return false;
}

int main() {
    int year{0};
    std::cin >> year;
    if (leapYear(year)) {
        std::cout << "YES" << std::endl;
        return 0;
    }
    std::cout << "NO" << std::endl;
    return 0;
}