#include <iostream>
#include <vector>

int main() {

    int size{0};
    std::cin >> size;
    if (size > 9 || size < 1) {
        return 1;
    }

    std::vector<int> num;
    int aux{0};

    for (int i = 0; i < size; i++) {
        std::cin >> aux;
        if (aux > 9 || aux < 1) {
            return 1;
        }
        num.push_back(aux);
    }
    
    //Not finished...


    return 0;
}