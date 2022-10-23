#include <iostream>

int main() {

    std::string input;
    std::getline(std::cin,input);
    unsigned int num_of_a{0};
    for (int i = 0; i <= input.length(); i++) {
        if (input[i] == 'a') {
            num_of_a++;
        }
    }
    std::cout << num_of_a << std::endl;
    return 0;
}