#include <iostream>

int main() {
    int row{0};
    std::cin >> row;
    int space{row-1};
    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= space; j++) {
            std::cout << " ";
        }
        space--;
        for (int j = 1; j <= (2*i-1); j++) {
            std::cout << "*";
        }
        std::cout << std::endl;
    }
    space = 1;
    for (int i = 1; i <= row-1; i++) {
        for(int j = 1; j <= space; j++) {
            std::cout<<" ";
        }
        space++;
        for(int j = 0; j < (2*(row-i)-1); j++) {
            std::cout<<"*";
        }
        std::cout << std::endl;
    }
    return 0;
}