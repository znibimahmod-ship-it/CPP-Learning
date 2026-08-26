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
int RandNumFromTO(int From, int To) {
	////srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}
void FillArrayWithRandomNumber(int& length, int arr[100]) {

	cout << "Enter much random number you want in your 1 array: ";
	cin >> length;

	for (int i = 0; i < length; i++) {
		arr[i] = RandNumFromTO(1, 100);
	}
}
void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
bool isPrimeNumber(int Num) {
	if (Num > 1) {
		for (int i = 2; i < Num; i++) {
			if (Num % i == 0) {
				return true;
			}
		}
	}
	return false;
}

void AddArrayElement(int number, int arr2[100], int& arr2length)
{
	arr2length++;
	arr2[arr2length - 1] = number;
}

void CopyArrayUsingAddArrayElement(int arr1[100], int arr2[100], int arr1length, int& arr2length)
{
	for (int i = 0; i < arr1length; i++) {
		if (isPrimeNumber(arr1[i])) {
			AddArrayElement(arr1[i], arr2, arr2length);
		}
	}
}
int main() {
	int arr1[100], arr1length = 0;
	int arr2[100], arr2length = 0;
	srand((unsigned)time(NULL));

	//fill Array with random elements
	FillArrayWithRandomNumber(arr1length, arr1);

	//Print
	cout << "Array 1 element: " << endl;
	Print_Array(arr1length, arr1);

	//Copy
	CopyArrayUsingAddArrayElement(arr1, arr2, arr1length, arr2length);
	//Print
	cout << "Array 2 Prime element: " << endl;
	Print_Array(arr2length, arr2);

	return 0;
}