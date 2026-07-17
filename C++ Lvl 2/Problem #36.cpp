#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	while (N <= 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
void Print_Array(int N, int arr[100]) {
	for (int i = 1; i <= N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void AddInputToArray(int arr1[100], int& lenght) {
	int N, C;
	do {
		cout << "Please enter a number : ";
		cin >> N;
		arr1[lenght] = N;
		cout << "Do you want to add more numbers? [0]:No / [1]:Yes";
		cin >> C;
		if (C == 1) {
			lenght++;
		}

	} while (C != 0);
}
int main() {
	int lenght = 1;
	int arr1[100];
	srand((unsigned)time(NULL));

	//add Array
	AddInputToArray(arr1, lenght);

	//Print
	cout << "Array Lenght: " << lenght << endl;
	cout << "Array elements: ";
	Print_Array(lenght, arr1);

	return 0;
}