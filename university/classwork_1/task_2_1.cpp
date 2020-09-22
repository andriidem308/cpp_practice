#include <iostream>
#include <cmath>

using namespace std;

string toBinary(int n, int m){
	string binary_n = "";

	for (int i=7; i >= 0; i--){
		string ibit = to_string(n / (int) pow(2, i));
		if (i == m){
			if (ibit == "1") ibit = "0";
			else ibit = "1";
		}
		binary_n += ibit;
		n = n % (int) pow(2, i);
	}

	return binary_n;
}

int toInteger(string binary_array){
	int casted = 0;
	for (int i = 0; i < 8; i++){
		casted += (int) (binary_array[i] - '0') * (int) pow(2, 7 - i);
	}

	return casted;
}

int main(){
	int n, m;
	cin >> n >> m;

	string binary_arr = toBinary(n, m);
	int n_new = toInteger(binary_arr);

	cout << binary_arr << endl << n_new;

	return 0;
}
