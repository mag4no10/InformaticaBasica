#include <iostream>

// HECHO CON DIGITOS DE TABLA ASCII
// FUNCIONES CON ISUPPER O ISLOWER NO SON UTILIZADAS


void print_line(char c, std::string s, bool b) {
    std::cout << s << "('" << c << "') = ";
    if (b) { 
        std::cout << "true" << std::endl;
    }
    else {
        std::cout << "false" << std::endl;
    }
}

void character_checker(char c) {
    if (c >= 65 && c <= 90 || c >= 97 && c <= 122) {
        print_line(c, "letter", true);
    } else {
        print_line(c, "letter", false);
    }
    if ((c == 65 || c == 69 || c == 73 || c == 79 || c == 85) || (c == 97 || c == 101 || c == 105 || c == 111 || c == 117)) {
        print_line(c, "vowel", true);
    } else {
        print_line(c, "vowel", false);
    }
    if ((c >= 66 && c <= 68) || (c >= 70 && c <= 72) || (c >= 74 && c <= 78) || (c >= 80 && c <= 84) || (c >= 86 && c <= 90) || (c >= 98 && c <= 100) || (c >= 102 && c <= 104) || (c >= 106 && c <= 110) || (c >= 112 && c <= 116) || (c >= 118 && c <= 122)) {
        print_line(c, "consonant", true);
    } else {
        print_line(c, "consonant", false);
    }
    if (c >= 65 && c <= 90) {
        print_line(c, "uppercase", true);
    } else {
        print_line(c, "uppercase", false);
    }
    if (c >= 97 && c <= 122) {
        print_line(c, "lowercase", true);
    } else {
        print_line(c, "lowercase", false);
    }
    if (c >= 48 && c <= 57) {
        print_line(c, "digit", true);
    } else {
        print_line(c, "digit", false);
    }
}

int main() {
    char character{' '};
    std::cin >> character;
    character_checker(character);
    return 0;
}