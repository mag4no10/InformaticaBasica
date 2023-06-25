#ifndef CARS_H
#define CARS_H
#include <iostream>

class Complex {
    public:
        Complex(const double& real = 0.0, const double& imaginario = 0.0) : real_{real}, imaginario_{imaginario} {};
        double real() const { return real_; };
        double imaginario() const { return imaginario_; };
        double modulo() const;
        Complex operator+(const Complex&) const;
        friend std::ostream& operator<<(std::ostream& os, const Complex& complex);
        bool operator==(const Complex& complex1);

    private:
        double real_{};
        double imaginario_{};
};

Complex operator-(const Complex& complex1, const Complex& complex2);
bool operator<(const Complex&, const Complex&);

#endif