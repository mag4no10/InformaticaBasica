#include <iostream>

int main() {
  // First way:
  char character {'H'} ;
  int i_var{character}; // initialize an integer with the value of character
  std::cout << i_var << std::endl << std::endl; // print the integer value

  // Alternative: a type cast:
  char character2{'a'};
  std::cout << character2 << '\n';
  std::cout << static_cast<int>(character2) << '\n';
  std::cout << character2 << '\n';

  return 0;
}