#include<iostream>
#include<cmath>


using namespace std;

string toBinary(int n){
	string binary_n = "";

	for (int i=7; i >= 0; i--){
		binary_n += to_string(n / (int) pow(2, i));
		n = n % (int) pow(2, i);
	}

	return binary_n;
}

string shift_left(string b_arr){
	string shifted = "";
	for (int i=1; i < 8; i++){
		shifted += b_arr[i];
	}
	shifted += b_arr[0];

	return shifted;
}

int toInteger(string shifted_arr){
	int casted = 0;
	for (int i = 0; i < 8; i++){
		casted += (int) (shifted_arr[i]-'0') * (int) pow(2, 7-i);
	}

	return casted;
}

int main(){
	int a;
	cin >> a ;

	string binary_arr = toBinary(a);
	string shifted_arr = shift_left(binary_arr);
	int casted_num = toInteger(shifted_arr);

	cout << binary_arr << endl << shifted_arr << endl << casted_num;
	return 0;
}
