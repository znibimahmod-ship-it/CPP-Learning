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

void Print_Array_Elements(int N,int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << "Element [" << i << "]:";
		arr[i] = ReadPositiveNumber("");
	}
}
void Print_Array(int N,int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void CountRepeatedNumber(int N,int arr[100]) {
	int C = ReadPositiveNumber("Enter the number you want to check: ");
	int comp = 0;

	for (int i = 0; i < N; i++) {
		if (arr[i] == C) {
			comp += 1;
		}
	}
	cout << endl;
	cout << C << " is repeated " << comp << " time(s)";
}

int main() {
	int Number_of_elements = ReadPositiveNumber("Enter number of elements: ");
	int arr[100];

	Print_Array_Elements(Number_of_elements, arr);
	cout << "Original array: ";
	Print_Array(Number_of_elements, arr);
	CountRepeatedNumber(Number_of_elements, arr);
	
	return 0;
}