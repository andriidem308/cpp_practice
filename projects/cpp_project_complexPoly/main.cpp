#include "Utils.cpp"


int main()
{
//    Complex c1(1, 2);
//    Complex c2(2, 1);
//    c1.print();
//    c2.print();
//
//    Complex c3 = c1 + c2;
//    c3.print();
//
//    Complex c4 = c1*c2;
//    c4.print();
//
//    c4 += c1;
//    c4.print();
//
//    Complex c5 = c1 ^ 2;
//    c5.print();
//
//    cout << (c1 == c5) << endl;
//
//    cout << c1;
//
//    getReal(c1);
//
//    cout << "COMPLEX POLYNOM:" << endl;
//    double coeffs[3] = { 1,2,1 };
//    ComplexPoly complexPoly(3, coeffs);
//    cout << "First coefficient:" << endl;
//    cout << complexPoly[1] << endl;
//    complexPoly[1] = 3;
//    cout << complexPoly[1] << endl;
//
//    cout << "complexPoly(c1) =" << complexPoly(c1) << endl;
//
//    double coeffs2[3] = { 3,4,5 };
//    ComplexPoly complexPoly2(3, coeffs2);
//    complexPoly = complexPoly2;
//    for (int i = 0;i < 3;++i)
//        cout << complexPoly[i] << " " << complexPoly2[i] << endl;
    vector<vector<string>> info = get_str_coeffs_arr();
//    print_vector(info);
    vector<vector<double>> double_info = str_arr_to_double_arr(info);
    vector<vector<Complex>> complex_info = double_arr_to_complex_arr(double_info);
    vector<ComplexPoly> complexPolys_arr = make_complexPolys_arr(complex_info);

    cout << endl;
    print_vector(complexPolys_arr);

    cout << complexPolys_arr[0] + complexPolys_arr[1];


    return 0;
}