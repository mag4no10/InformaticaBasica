#include <iostream>

int main () {
	int rows,columns;
    std::cin >> rows >> columns;
    char num{0};
    int sum{0};
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            std::cin >> num;
            if (i%2 == j%2) {
                sum += static_cast<int> (num - '0');
            }
        }
    }
    std::cout << sum << std::endl;
}