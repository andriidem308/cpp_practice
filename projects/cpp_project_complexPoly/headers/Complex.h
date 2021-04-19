#ifndef CPP_PROJECT_COMPLEXPOLY_COMPLEX_H
#define CPP_PROJECT_COMPLEXPOLY_COMPLEX_H


#pragma once
#include <iostream>
#include <exception>

using namespace std;

class Complex
{
public:
    Complex();
    Complex(double, double);

    double get_real() const;
    double get_imag() const;

    void print() const;
    Complex& operator=(Complex);
    Complex operator+(Complex);
    Complex operator-(Complex);
    Complex operator*(Complex);
    Complex operator/(Complex);
    Complex& operator+=(Complex);
    Complex& operator-=(Complex);
    Complex operator^(int);
    bool operator==(Complex);
    friend ostream& operator<<(ostream&, Complex);

    // +
    // -
    // *
    // /
    // %

private:
    double imag;
    double real;
};



#endif //CPP_PROJECT_COMPLEXPOLY_COMPLEX_H
