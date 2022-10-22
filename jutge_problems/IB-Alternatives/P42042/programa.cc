#include <iostream>
#include <string>

int main () {

    char letter;
    std::cin >> letter;
    /*
    if (letter < 65 || letter > 90) {
        if (letter < 97 || letter > 122) {
            return 1;
        }
    }
    if (letter >= 65 && letter <= 90) {
        std::cout << "uppercase" << std::endl;
    }
    else {
        std::cout << "lowercase" << std::endl;
    }
    */
    if (isupper(letter)) {
        std::cout << "uppercase" << std::endl;
    }
    if (islower(letter)) {
        std::cout << "lowercase" << std::endl;
    }
    std::string vowels = "AEIOUaeiou";
    bool vowel_check = false;
    for (int i = 0; i < vowels.length(); i++) {
        if (letter == vowels[i]) {
            vowel_check = true;
            break;
        }
    }
    if (vowel_check) {
        std::cout << "vowel" << std::endl;
    }
    else {
        std::cout << "consonant" << std::endl;
    }

    return 0;
}