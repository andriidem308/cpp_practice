#include <iostream>

using namespace std;

int binary_search(int * arr, int length, int key){
	int left = 0;
	int right = length - 1;

	while (left < right){
		int middle = (left + right) / 2;

		if (arr[middle] < key) left = middle - 1;
		else if (arr[middle] > key) right = middle + 1;
		else return middle;
	}

	return -1;
}

int main(){
	int array_int[16] = {1, 2, 5, 5, 6, 7, 8, 10, 10, 15, 21, 22, 24, 25, 28, 28};
	cout << binary_search(array_int, 16, 15);
	return 0;
}