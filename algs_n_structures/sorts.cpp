#include <iostream>

using namespace std;

void bubble_sort(int arr[], int size){
	bool swapped = true;

	while (swapped){
		swapped = false;

		for (int i = 0; i < size - 1; i++){
			if (arr[i] > arr[i+1]){
				int tmp = arr[i];
				arr[i] = arr[i+1];
				arr[i+1] = tmp;
				swapped = true;
			}
		}
	}
}

void insertion_sort(int * arr, int size){
	for (int i = 1; i < size; i++){
		int item_to_insert = arr[i];
		int j = i - 1;

		while (j >= 0 && arr[j] > item_to_insert){
			arr[j + 1] = arr[j];
			j--;
		}

		arr[j + 1] = item_to_insert;
	}
}

void selection_sort(int arr[], int size){
	for (int i = 0; i < size; i++){
		int lowest_value_index = i;

		for (int j = i + 1; j < size; j++){
			if (arr[j] < arr[lowest_value_index]){
				lowest_value_index = j;
			}
		}

		int tmp = arr[i];
		arr[i] = arr[lowest_value_index];
		arr[lowest_value_index] = tmp;
	}
}

void merge(int * arr, int l, int m, int r){
	int i, j, k;
	int ll = m - l + 1, rl = r - m;

	int L[ll], R[rl];
	for (i = 0; i < ll; i++) L[i] = arr[l + i];
	for (j = 0; j < rl; j++) R[j] = arr[m + 1 + j];

	i = 0; j = 0; k = l;

	while (i < ll && j < rl){
		if (L[i] <= R[j]){
			arr[k] = L[i];
			i++;
		} else {
			arr[k] = R[j];
			j++;
		}
		k++;
	}

	while (i < ll){
		arr[k] = L[i];
		i++;
		k++;
	}

	while (j < rl) {
		arr[k] = R[j];
		j++;
		k++;
	}
}

void merge_sort(int * arr, int l, int r){
	if (l < r){
		int m = (l + r) / 2;

		merge_sort(arr, l, m);
		merge_sort(arr, m + 1, r);

		merge(arr, l, m, r);
	}
}

//void quick_sort()

int main(){
	int arr [10] = {8, 4, 1, 1, 7, 3, 5, 9, 2, 4};

	for (int x: arr) cout << x << " ";
//	bubble_sort(arr, 10);
//	insertion_sort(arr, 10);
//	selection_sort(arr, 10);
	merge_sort(arr, 0, 9);
//	quick_sort(arr, 10);

	cout << endl;
	for (int x: arr) cout << x << " ";

	return 0;
}