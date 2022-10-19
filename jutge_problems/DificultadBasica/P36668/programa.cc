#include <iostream>
#include <math.h>

int SumOfSquares(const unsigned int& num) {
    unsigned int sum{0};
    if (num == 0) {
        return 0;
    }
    for (int i = 1; i <= num; i++) {
        sum += pow(i,2);
    }
    return sum;
}


int main() {

    unsigned int num{0};
    std::cin >> num;
    if (num < 0) {
        return 1;
    }
    std::cout << SumOfSquares(num) << std::endl;

    return 0;
}