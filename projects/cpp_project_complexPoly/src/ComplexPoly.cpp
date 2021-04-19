#include <vector>
#include "../headers/ComplexPoly.h"

ComplexPoly::ComplexPoly() {
    vector<Complex> coeffs;
    this->coeffs = coeffs;
}

ComplexPoly::ComplexPoly(int size) {
    vector<Complex> new_coeffs;
    coeffs = new_coeffs;
    for (int i = 0; i < size; i++){
        Complex c1(0, 0);
        coeffs.push_back(c1);
    }
}

ComplexPoly::ComplexPoly(vector<Complex> coeffs) {
    this->coeffs.clear();
    for (int i = 0; i < coeffs.size(); i++) this->coeffs[i] = coeffs[i];
}

ComplexPoly::ComplexPoly(const ComplexPoly& rhs) {
    coeffs.clear();
    for (int i = 0; i < rhs.get_size(); i++) coeffs[i] = rhs.coeffs[i];
}

ComplexPoly::~ComplexPoly()
{
    coeffs.clear();
}

int ComplexPoly::get_size() const {
    return coeffs.size();
}


Complex& ComplexPoly::operator[](int index)
{
    if (index<0 || index > get_size() - 1)
        throw range_error("Index out of range");
    return coeffs[index];
}

ComplexPoly& ComplexPoly::operator=(ComplexPoly& cp)
{
    if (!coeffs.empty()) coeffs.clear();
    if (this == &cp) return *this;

    int size = cp.get_size();
    coeffs.clear();
    for (int i = 0;i <= size;++i)
        coeffs.push_back(cp[i]);
    return *this;
}

ComplexPoly& ComplexPoly::operator+(const ComplexPoly& cp) {
    int l1 = get_size(), l2 = get_size();
    int m = max(l1, l2);

    ComplexPoly complexPoly(m);

    for (int i = 0; i < l1; i++) complexPoly.coeffs[i] += coeffs[i];
    for (int i = 0; i < l2; i++) complexPoly.coeffs[i] += cp.coeffs[i];

    return complexPoly;
}

ComplexPoly& ComplexPoly::operator-(const ComplexPoly& cp) {
    int l1 = get_size(), l2 = get_size();
    int m = max(l1, l2);

    ComplexPoly complexPoly(m);

    for (int i = 0; i < l1; i++) complexPoly.coeffs[i] += coeffs[i];
    for (int i = 0; i < l2; i++) complexPoly.coeffs[i] -= cp.coeffs[i];

    return complexPoly;
}

ComplexPoly ComplexPoly::operator*(Complex c2) {
    ComplexPoly& cp = *this;
    for (int i = 0; i < get_size(); i++) cp.coeffs[i] = cp.coeffs[i] * c2;

    return cp;
}

ComplexPoly ComplexPoly::operator/(Complex c2) {
    ComplexPoly& cp = *this;
    for (int i = 0; i < get_size(); i++) cp.coeffs[i] = cp.coeffs[i] / c2;

    return cp;
}


void ComplexPoly::print() const {
    int n = this->get_size();
    for (int i = n-1; i > 0; i--){
        cout << this->coeffs[i] << "x^" << i << "+";
    }
    cout << this->coeffs[0] << "x^0" << endl;
}


ostream& operator<<(ostream& out, ComplexPoly complexPoly) {
    complexPoly.print();
    return out;
}
