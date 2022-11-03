#include <iostream>

int main() {
    int Y{0};
    while (std::cin >> Y) {
        int k{0},x{0},b{0},c{0},q{0},p{0},y{0},z{0},n{0},e{0};
        int D{0},M{0};
        k = Y / 100;
        x = Y % 19;
        b = Y % 4;
        c = Y % 7;
        q = k / 4;
        p = (13+(8*k)) / 25;
        y = (15-p+k-q) % 30;
        z = ((19*x)+y) % 30;
        n = (4+k-q) % 7;
        e = ((2*b) + (4*c) + (6*z) + n) % 7;
        if (z+e <= 9) {
            D = 22+z+e;
            M = 3;
        }
        else if (z == 29 && e == 6) {
            D = 19;
            M = 4;
        }
        else if (z == 28 && e == 6 && x > 10) {
            D = 18;
            M = 4;
        }
        else {
            D = z+e-9;
            M = 4;
        }
        std::cout << D << "/" << M << std::endl;
    }
    return 0;
}