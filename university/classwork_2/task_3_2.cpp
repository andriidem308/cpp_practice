#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

class BiquadraticEquation {
public:
	BiquadraticEquation(double a, double b, double c);
	vector<double> SolveEquation();
private:
	double a, b, c;
};

BiquadraticEquation::BiquadraticEquation(double a, double b, double c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

vector<double> BiquadraticEquation::SolveEquation() {
	double d = b*b - 4*a*c;
	vector<double> roots = {};

	if (d == 0) {
		double y = -b / (2*a);

		if (y == 0) {
			roots.push_back(0.0);
		} else if (y > 0){
			double x = sqrt(y);

			roots.push_back(x);
			roots.push_back(-x);
		}
	} else if (d > 0) {
		double y_1, y_2;
		y_1 = (-b-sqrt(d)) / (2*a);
		y_2 = (-b+sqrt(d)) / (2*a);

		if (y_1 == 0 || y_2 == 0) {
			roots.push_back(0.0);
		}

		if (y_1 > 0) {
			double x = sqrt(y_1);
			roots.push_back(x);
			roots.push_back(-x);
		}

		if (y_2 > 0) {
			double x = sqrt(y_2);
			roots.push_back(x);
			roots.push_back(-x);
		}
	}

	return roots;
}

int main(){
	double a, b, c;
	cin >> a >> b >> c;

	BiquadraticEquation biquadraticEquation(a, b, c);
	vector<double> roots_arr = biquadraticEquation.SolveEquation();

	for (double root : roots_arr){
		cout << root << "\t";
	}

	return 0;
}
