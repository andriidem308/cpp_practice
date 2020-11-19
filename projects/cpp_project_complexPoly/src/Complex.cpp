#include "../headers/Complex.h"
#include <iostream>

using namespace std;

Complex::Complex() {
    real = 0;
    imag = 0;
}

Complex::Complex(double re, double im)
{
    real = re;
    imag = im;
}

double Complex::get_real() const
{
    return real;
}

double Complex::get_imag() const
{
    return imag;
}

void Complex::print() const
{
    cout << "(" << real << " + " << imag << "i)";
}

Complex& Complex::operator=(Complex c2){
    if (this == &c2) return *this;

    real = c2.real;
    imag = c2.imag;

    return *this;
}

Complex Complex::operator+(Complex c2)
{
    Complex res(real + c2.get_real(), imag + c2.get_imag());
    return res;
}

Complex Complex::operator*(Complex c2)
{
    double r = real*c2.real - imag*c2.imag;
    double i = real*c2.imag + imag*c2.real;
    Complex res(r,i);
    return res;
}

Complex Complex::operator/(Complex c2)
{
    double r = (real*c2.real + imag*c2.imag) / (c2.real*c2.real + c2.imag*c2.imag);
    double i = (imag*c2.real - real*c2.imag) / (c2.real*c2.real + c2.imag*c2.imag);
    Complex res(r,i);
    return res;
}

Complex& Complex::operator+=(Complex c2)
{
    real += c2.get_real();
    imag += c2.get_imag();

    return *this;
}

Complex& Complex::operator-=(Complex c2)
{
    real -= c2.get_real();
    imag -= c2.get_imag();

    return *this;
}

Complex Complex::operator^(int power)
{
    if (power == 0)
        return Complex(1, 0);

    Complex res=*this;
    for (int i = 1;i < power;++i)
        res = res*(*this);
    return res;
}

bool Complex::operator==(Complex c2)
{
    if ((real == c2.get_real() && imag == c2.get_imag()))
        return true;
    else
        return false;

}

ostream& operator<<(ostream& out, Complex c1)
{
    c1.print();
    return out;
}

