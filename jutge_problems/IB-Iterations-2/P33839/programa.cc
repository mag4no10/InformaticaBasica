#include <iostream>

int main() {
    int num{0};
    while(std::cin >> num) {
        int sum{0},num_copy{num};
        while(num != 0) {
            sum += num%10;
            num /= 10;
        }
        std::cout << "The sum of the digits of " << num_copy << " is " << sum << "." << std::endl;
    }
    return 0;
}