#include <iostream>
#include <string>
#include <algorithm>

int main() {
    int num{0};
    std::cin >> num;
    char hex[20];
    sprintf(hex,"%X",num);
    std::string result(hex),result_copy(hex);
    std::reverse(result.begin(),result.end());
    std::cout << result << std::endl;

    return 0;
}