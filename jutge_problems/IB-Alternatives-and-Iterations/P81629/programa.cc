# include <iostream>

int main() {
    unsigned int euros{0},centimos{0};
    std::cin >> euros >> centimos;
    unsigned int b_500{0},b_200{0},b_100{0},b_50{0},b_20{0},b_10{0},b_5{0};
    unsigned int c_200{0},c_100{0},c_50{0},c_20{0},c_10{0},c_5{0},c_2{0},c_1{0};

    while (euros != 0) {
        if (euros >= 500) {
            b_500++;
            euros-=500;
            continue;
        }
        if (euros >= 200) {
            b_200++;
            euros-=200;
            continue;
        }
        if (euros >= 100) {
            b_100++;
            euros-=100;
            continue;
        }
        if (euros >= 50) {
            b_50++;
            euros-=50;
            continue;
        }
        if (euros >= 20) {
            b_20++;
            euros-=20;
            continue;
        }
        if (euros >= 10) {
            b_10++;
            euros-=10;
            continue;
        }
        if (euros >= 5) {
            b_5++;
            euros-=5;
            continue;
        }
        if (euros >= 2) {
            c_200++;
            euros-=2;
            continue;
        }
        if (euros >= 1) {
            c_100++;
            euros-=1;
            continue;
        }
    }

    while (centimos != 0) {
        if (centimos >= 50) {
            c_50++;
            centimos-=50;
            continue;
        }
        if (centimos >= 20) {
            c_20++;
            centimos-=20;
            continue;
        }
        if (centimos >= 10) {
            c_10++;
            centimos-=500;
            continue;
        }
        if (centimos >= 5) {
            c_5++;
            centimos-=5;
            continue;
        }
        if (centimos >= 2) {
            c_2++;
            centimos-=2;
            continue;
        }
        if (centimos >= 1) {
            c_1++;
            centimos-=1;
            continue;
        }
    }

    std::cout << "Banknotes of 500 euros: " << b_500 << std::endl;
    std::cout << "Banknotes of 200 euros: " << b_200 << std::endl;
    std::cout << "Banknotes of 100 euros: " << b_100 << std::endl;
    std::cout << "Banknotes of 50 euros: "  << b_50  << std::endl;
    std::cout << "Banknotes of 20 euros: "  << b_20  << std::endl;
    std::cout << "Banknotes of 10 euros: "  << b_10  << std::endl;
    std::cout << "Banknotes of 5 euros: "   << b_5   << std::endl;

    std::cout << "Coins of 2 euros: "  << c_200  << std::endl;
    std::cout << "Coins of 1 euro: "   << c_100  << std::endl;
    std::cout << "Coins of 50 cents: " << c_50 << std::endl;
    std::cout << "Coins of 20 cents: " << c_20 << std::endl;
    std::cout << "Coins of 10 cents: " << c_10 << std::endl;
    std::cout << "Coins of 5 cents: "  << c_5  << std::endl;
    std::cout << "Coins of 2 cents: "  << c_2  << std::endl;
    std::cout << "Coins of 1 cent: "   << c_1  << std::endl;


    return 0;
}