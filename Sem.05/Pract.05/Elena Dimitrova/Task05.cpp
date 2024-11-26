#include <iostream>
using namespace std;

const int SIZE = 100;

int isSymetric(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		if (arr[i] != arr[size - i - 1]) {
			return 0;
		}
	}
	return 1;
}

int main() {
	int size;
	int arr[SIZE];

	cout << "Enter size of array: ";
	cin >> size;

	cout << "Enter array: ";
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	if (isSymetric(arr, size)) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
}