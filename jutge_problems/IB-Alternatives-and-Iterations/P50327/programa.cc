#include <iostream>
#include <algorithm>

int main() {

    std::string num;
    std::cin >> num;
    std::reverse(num.begin(),num.end());
    std::cout << num << std::endl;

    return 0;
}