#include <iostream>

using namespace std;

double func(int n, double x){
	if (n == 0) return 1;
	if (n == 1) return 2*x;
	return 2*x*func(n-1, x) - 2*(n-1)*func(n-2, x);
}

int main() {
	int n;
	double x;

	cin >> n >> x;
	double result = func(n, x);
	cout << result;

	return 0;
}

