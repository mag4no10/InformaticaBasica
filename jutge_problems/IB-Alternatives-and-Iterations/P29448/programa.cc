#include <iostream>



bool leapYear(const int& year) {
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return true;
    }
    return false;
}

bool dateChecker(const int& day, const int& month, const int& year) {
    if (day < 1 || month < 1 || year < 1800) {
        return false;
    }
    if (day > 31 || month > 12 || year > 9999) {
        return false;
    }
    if (!leapYear(year) && month == 2 && day > 28) {
        return false;
    }
    if (month == 2 && day > 29) {
        return false;
    }
    if (month <= 7 && month % 2 == 0 && day > 30) {
        return false;
    }
    if (month > 7 && month % 2 != 0 && day > 30) {
        return false;
    }
    return true;
}

int main() {
    int day{0}, month{0}, year{0};
    while (std::cin >> day >> month >> year) {
        if (!dateChecker(day,month,year)) {
            std::cout << "Incorrect Date" << std::endl;
            continue;
        }
        std::cout << "Correct Date" << std::endl;
    }
    return 0;
}