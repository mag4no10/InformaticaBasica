#include <iostream>

int main() {
    for (int i = 0; i < 5;) {
        std::cout << i++ << " ";
    }
    std::cout << std::endl << "end" << std::endl;
}