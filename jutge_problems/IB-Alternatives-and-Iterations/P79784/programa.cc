#include <iostream>


int main() {

    std::string input;
    std::cin >> input;
    int south{0},east{0};
    for (int i = 0; i <= input.length(); i++) {
        if (input[i] == 'n') {
            south--;
        }
        else if (input[i] == 's') {
            south++;
        }
        else if (input[i] == 'e') {
            east++;
        }
        else if (input[i] == 'w') {
            east--;
        }
    }
    int x_position = east;
    int y_position = south;
    std::cout << "(" << x_position << ", " << y_position << ")" << std::endl; 
    return 0;
}