#include "Header.h"

int main() {
	int arr[10] = { 30, 12, 523, 452, 10, 3, 1034, 45,44, 0 };
	std::cout << "Before: ";
	printArray(arr, 10);
	InsertionArray(arr, 10);
	std::cout << "\nAfter: ";
	printArray(arr, 10);
}

void InsertionArray(int arr[], int size) {
	for (int step = 0; step < size; step++) {
		int key = arr[step];
		int j = step - 1;
		//Check the boundaries between the array length and the negative
		while (key < arr[j] && j >= 0) {
			arr[j + 1] = arr[j];
			--j; //Backtrack
		}
		//Sorted it
		arr[j + 1] = key;
	}
}

void printArray(int arr[], int size) {
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << " ";
}