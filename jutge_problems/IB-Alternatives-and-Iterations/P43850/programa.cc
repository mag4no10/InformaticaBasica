#include <iostream>

int main() {
    unsigned int num{0}, result{0};
    while(std::cin >> num) {
        //  *5 +6 *4 +9 *5 
        result = (((((num/5)-9)/4)-6)/5);
        std::cout << result << std::endl;
    }
    return 0;
}