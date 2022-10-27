# include <iostream>

int main() {
    int euros{0},centimos{0};
    int b_500{0},b_200{0},b_100{0},b_50{0},b_20{0},b_10{0},b_5{0},c_2{0},c_1{0}; 
    std::cin >> euros >> centimos;
    if (euros < 0 || centimos < 0) {
        return 1;
    }
    int total_euros = euros;
    while (total_euros != 0) {
        if (total_euros % 500 == 0) {
            b_500++;
            total_euros -= 500;
            continue;
        }
        if (total_euros % 200 == 0) {
            b_200++;
            total_euros -= 200;
            continue;
        }
        if (total_euros % 100 == 0) {
            b_100++;
            total_euros -= 100;
            continue;
        }
        if (total_euros % 50 == 0) {
            b_50++;
            total_euros -= 50;
            continue;
        }
        if (total_euros % 20 == 0) {
            b_20++;
            total_euros -= 20;
            continue;
        }
        if (total_euros % 10 == 0) {
            b_10++;
            total_euros -= 10;
            continue;
        }
        if (total_euros % 5 == 0) {
            b_5++;
            total_euros -= 5;
            continue;
        }
        if (total_euros % 2 == 0) {
            c_2++;
            total_euros -= 2;
            continue;
        }
        if (total_euros % 1 == 0) {
            c_1++;
            total_euros -= 1;
            continue;
        }
    }
    std::cout << "Banknotes of 500 euros: " << b_500 << std::endl;
    std::cout << "Banknotes of 200 euros: " << b_200 << std::endl;
    std::cout << "Banknotes of 100 euros: " << b_100 << std::endl;
    std::cout << "Banknotes of 50 euros:  " << b_50  << std::endl;
    std::cout << "Banknotes of 20 euros:  " << b_20  << std::endl;
    std::cout << "Banknotes of 10 euros:  " << b_10  << std::endl;
    std::cout << "Banknotes of 5 euros: "   << b_5   << std::endl;

    std::cout << "Coins of 2 euros: " << c_2 << std::endl;
    std::cout << "Coins of 1 euro: "  << c_1 << std::endl;


    return 0;
}