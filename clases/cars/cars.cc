#include <iostream>
#include <cmath>

#include "cars.h"

Complex Complex::operator+(const Complex& complex1) const {
    return Complex(this->real() + complex1.real(), this->imaginario() + complex1.imaginario());
}

std::ostream& operator<<(std::ostream& os, const Complex& complex) {
    os << complex.real() << "+" << complex.imaginario();
    return os;
}

bool Complex::operator==(const Complex& complex1) {
    if (this->real() == complex1.real() && this->imaginario() == complex1.imaginario()) {
        return true;
    }
    return false;
}   

Complex operator-(const Complex& complex1, const Complex& complex2) {
    return Complex(complex1.real() - complex2.real(), complex1.imaginario() - complex2.imaginario());
}

double Complex::modulo() const {
    return sqrt(pow(this->real(),2) + pow(this->imaginario(),2));
}

bool operator<(const Complex& complex1, const Complex& complex2) {
    if (complex1.real() < complex2.real() && complex1.imaginario() < complex2.imaginario()) {
        return true;
    }
    return false;
}