#include <iostream>

int main () {
	int size;
    char num;
    int sum = 0;
    std::cin >> size;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            std::cin >> num;
            if (i == j || i+j == size-1) {
                sum += static_cast<int>(num-'0');
            }
        }
    }
    std::cout << sum << std::endl;
}