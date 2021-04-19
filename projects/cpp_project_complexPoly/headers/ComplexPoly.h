#ifndef CPP_PROJECT_COMPLEXPOLY_COMPLEXPOLY_H
#define CPP_PROJECT_COMPLEXPOLY_COMPLEXPOLY_H

#include "Complex.h"

class ComplexPoly {
public:
    vector<Complex> coeffs;

    ComplexPoly();
    ComplexPoly(int);
    ComplexPoly(vector<Complex>);
    ComplexPoly(const ComplexPoly& rhs);
    ~ComplexPoly();

    int get_size() const;
    void print() const;
    friend ostream& operator<<(ostream&, ComplexPoly);

    Complex& operator[] (int index);
    ComplexPoly& operator=(ComplexPoly& cp);

    ComplexPoly& operator+(const ComplexPoly& cp);
    ComplexPoly& operator-(const ComplexPoly& cp);

    ComplexPoly operator*(Complex);
    ComplexPoly operator/(Complex);
};


#endif //CPP_PROJECT_COMPLEXPOLY_COMPLEXPOLY_H
