#include <iostream>

int main() {

    int temperature{0};
    std::cin >> temperature;
    if (temperature > 30) {
        if (temperature >= 100) {
            std::cout << "it's hot\nwater would boil" << std::endl;
            return 0;
        }
        std::cout << "it's hot" << std::endl;
        return 0;
    }
    else if (temperature < 10) {
        if (temperature <= 0) {
            std::cout << "it's cold\nwater would freeze" << std::endl;
            return 0;
        }
        std::cout << "it's cold" << std::endl;
        return 0;
    }
    else {
        std::cout << "it's ok" << std::endl;
    }
    return 0;
}