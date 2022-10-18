#include <iostream>
#include <string>

int main () {
    char letter;
    std::cin >> letter;
    if (isupper(letter)) {
        char up_letter = letter+32;
        std::cout << up_letter << std::endl;
    }
    else if (islower(letter)) {
        char low_letter = letter-32;
        std::cout << low_letter << std::endl;
    }
    return 0;
}