#include <iostream>

int main () {

    unsigned int years{0},days{0},hours{0},minutes{0},seconds{0};

    std::cin >> years >> days >> hours >> minutes >> seconds;
    unsigned int total_seconds{0};

    total_seconds = seconds+minutes*60+hours*3600+days*86400+years*31536000;
    std::cout << total_seconds << std::endl;

    return 0;
}