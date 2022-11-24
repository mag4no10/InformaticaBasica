#include <iostream>
#include <vector>
#include <algorithm>

int max4(int a, int b, int c, int d) {
/*    if (a >= b && a >= c && a >= d) {
        return a;
    } 
    else if (b >= a && b >= c && b >= d) {
        return b;
    }
    else if (c >= b && c >= a && c >= d){ 
        return c;
    }
    else {
        return d;
    }
*/
    std::vector<int> numbers{a,b,c,d};
    return *max_element(numbers.begin(), numbers.end());
}

int main() {
    int a{0}, b{0}, c{0}, d{0};
    std::cin >> a >> b >> c >> d;
    std::cout << max4(a,b,c,d) << std::endl;
}