#include<iostream>
#include <string>
#include <vector>
#include "headers/Complex.h"
#include "headers/ComplexPoly.h"

using namespace std;

template<class T>
void print_vector(const vector<T>& vt){
    for (auto & item: vt){
        cout << item << " ";
    }
    cout << endl;
}

template<class T>
void print_vector_2d(const vector<vector<T>>& vvt){
    for (auto & vt: vvt){
        print_vector(vt);
    }
}

void print_complexPolys_arr(vector<ComplexPoly>& complexPolysArr){
    for (ComplexPoly cp: complexPolysArr){
        cout << cp << endl;
    }
}

void check_input(const vector<string>& line){
    if (line.size() % 2 != 0){
        cout << "Bad data, each line must have even amount of arguments" << endl;
        cout << "Problem line: ";
        print_vector(line);
        exit(1);
    }
}

vector<string> line_to_vector(string _line){
    vector<string> str_vector;
    int _len = _line.length();
    int _ind = 0;
    for (int i = 0; i < _len; i++){
        if (i == _len - 1){
            str_vector.push_back(_line.substr(_ind, i - _ind + 1));
            break;
        } else if (_line[i] == ' ' ) {
            str_vector.push_back(_line.substr(_ind, i - _ind));
            _ind = i + 1;
        }
    }

    check_input(str_vector);
    return str_vector;
}

vector<vector<string>> get_str_coeffs_arr(const string& mode= "console") {
    vector<vector<string>> coeffsList;

    if (mode == "console"){
        string line;
        getline(cin, line);
        while (line.length() != 0) {
            coeffsList.push_back(line_to_vector(line));
            getline(cin, line);
        }
    }
    else if (mode == "file"){
        cout << " ";
    }

    return coeffsList;
}

vector<vector<double>> str_arr_to_double_arr(vector<vector<string>> str_array){
    vector<vector<double>> double_array;

    for (int i = 0; i < str_array.size(); i++){
        vector<double> new_list;
        
        double_array.push_back(new_list);
        for (auto & val : str_array[i]){
            double_array[i].push_back(stod(val));
        }
    }

    return double_array;
}

vector<vector<Complex>> double_arr_to_complex_arr(vector<vector<double>> double_array){
    vector<vector<Complex>> complex_array;

    for (int i = 0; i < double_array.size(); i++){
        vector<Complex> new_list;
        complex_array.push_back(new_list);
        for (int j = 0; j < double_array[i].size(); j+=2){
            Complex new_complex(double_array[i][j], double_array[i][j+1]);
            complex_array[i].push_back(new_complex);
            cout << new_complex << ", " << i << ", " << j << " ";
        }
        cout << endl;
    }

    return complex_array;
}

vector<ComplexPoly> make_complexPolys_arr(vector<vector<Complex>> complex_array){
    vector<ComplexPoly> complexPolys_array;

    for (int i = 0; i < complex_array.size(); i++){
        ComplexPoly new_complexPoly(complex_array[i]);
        complexPolys_array.push_back(new_complexPoly);
    }

    return complexPolys_array;
}

