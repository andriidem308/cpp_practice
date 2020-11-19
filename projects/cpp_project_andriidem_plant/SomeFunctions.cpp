/***
 *
 * Project name: Plant
 * File: SomeFunctions.cpp
 * Project was created by Andrii Demchenko on 21.11.19
 * Year: 2-nd
 * Specialization: Computer mathematics
 * Taras Shevchenko National University of Kyiv
 * e-mail: andriidem308@gmail.com
 * phone number: +380660209961
 *
***/


#include <iostream>
#include <vector>
#include <fstream>

using namespace std;


// string line to vector of strings
vector<string> ltov(string _line){
	vector<string> str_vector;
	int _len = _line.length();
	int _ind = 0;
	for (int i = 0; i < _len; i++){
		if (i == _len - 1){
			str_vector.push_back(_line.substr(_ind, i - _ind + 1));
			break;
		} else if (_line[i] == ' ') {
			str_vector.push_back(_line.substr(_ind, i - _ind));
			_ind = i + 1;
		}
	}

	return str_vector;
}

// string line to vector of vectors of strings (console input)
vector<vector<string>> ltovs(int _number){
	vector<vector<string>> _target_vector;
	cin.ignore();
	for (int i = 0; i < _number; i++){
		cout << "-- Enter element " << i + 1 << ": ";
		string _some_line;
		getline(cin, _some_line);
		vector<string> _some_vector = ltov(_some_line);
		_target_vector.push_back(_some_vector);
	}

	return _target_vector;
}

// string line to vector of vectors of strings (file input)
vector<vector<string>> ltovs_f(int _number, ifstream *_fin){
	vector<vector<string>> _target_vector;
	for (int i = 0; i < _number; i++){
		string _some_line;
		getline(*_fin, _some_line);
		vector<string> _some_vector = ltov(_some_line);
		_target_vector.push_back(_some_vector);
	}

	return _target_vector;
}




