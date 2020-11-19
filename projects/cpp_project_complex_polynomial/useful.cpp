#include <iostream>
using namespace std;

//typedef struct complex{
//    float real;
//    float imag;
//
//    complex();
//    complex(float re, float im);
//    complex(complex *cnum);
//
//    complex operator+(complex b);
//    complex operator-(complex b);
//    complex operator*(complex b);
//    complex operator/(complex b);
//    complex operator+=(complex b);
//    complex operator^(short power);
//
//    complex operator*(float f);
//
//
//    void print() const;
//    friend ostream & operator<<(ostream&, complex);
//
//    void set(float re, float im);
//} ComplexNumber ;
//
//complex::complex(){
//    this->real = 0;
//    this->imag = 0;
//}
//complex::complex(float re, float im) {
//    this->real = re;
//    this->imag = im;
//}
//complex::complex(complex *cnum) {
//    this->real = cnum->real;
//    this->imag = cnum->imag;
//}
//
//complex complex::operator+(complex b) {
//    complex c;
//    c.real = this->real + b.real;
//    c.imag = this->imag + b.imag;
//    return c;
//}
//complex complex::operator-(complex b) {
//    complex c;
//    c.real = this->real - b.real;
//    c.imag = this->imag - b.imag;
//    return c;
//}
//complex complex::operator*(complex b) {
//    complex c;
//    c.real = real*b.real - imag*b.imag;
//    c.imag = b.real*imag + b.imag*real;
//    return c;
//}
//complex complex::operator/(complex b) {
//    complex c;
//    c.real = ((this->real*b.real + this->imag*b.imag) / (b.real*b.real + b.imag*b.imag));
//    c.imag = ((this->imag*b.real - this->real*b.imag) / (b.real*b.real + b.imag*b.imag));
//    return c;
//}
//complex complex::operator+=(complex b) {
//    this->real += b.real;
//    this->imag += b.imag;
//}
//complex complex::operator^(short power) {
//    if (power == 0) return complex(1, 0);
//    complex res(*this);
//    complex mul(*this);
//
//
//    for (short i = 1; i < power; i++){
//        res = res * mul;
//    }
//
//
//    return res;
//}
//complex complex::operator*(float f) {
//    this->real *= f;
//    this->imag *= f;
//}
//
//void complex::set(float re=0, float im=0) {
//    this->real = re;
//    this->imag = im;
//}
//
//void complex::print() const {
//    cout << "(" << real << " + " << imag << "i)";
//}
//
//ostream & operator<<(ostream& out, complex c_1){
//    c_1.print();
//    return out;
//}
//
//float get_random_number(float a=1.5, float b=8.5){
//    return a + roundf((rand() / (RAND_MAX / (b - a)))) ;
//}
//
//float * get_2n_random_numbers(int n){
//    float * random_numbers = new float[2*n];
//
//    for (int i = 0; i < 2*n; i++){
//        random_numbers[i] = get_random_number();
//    }
//
//    return random_numbers;
//}
//
//complex * generate_random_coeffs(int n){
//    float * random_numbers_2n = get_2n_random_numbers(n);
//
//    for (int i = 0; i < 2*n; i++) cout << random_numbers_2n[i] << " ";
//    cout << endl;
//
//    complex * random_coeffs = new complex[n];
//
//    for (int i = 0, j = 0; i < 2*n; i+=2){
//        float real = random_numbers_2n[i];
//        float imag = random_numbers_2n[i + 1];
//
//        complex rnd_complex_num(real, imag);
//        random_coeffs[j++] = rnd_complex_num;
//    }
//
//    return random_coeffs;
//}









