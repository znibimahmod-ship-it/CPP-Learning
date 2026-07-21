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
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void AddDistictElement(int N, int arr2[10], int& len2) {
	bool Found = false;

	if (len2 == 0) {
		len2++;
		arr2[len2 - 1] = N;
		return;
	}
	for (int i = 0; i < len2; i++) {
		if (N == arr2[i]) {
			Found = true;
			break;
		}
	}
	if (!Found) {
		len2++;
		arr2[len2 - 1] = N;
	}
}
void FillArray_DistinctNumber(int arr1[10], int length, int arr2[10], int& length2) {

	for (int i = 0; i < length; i++) {
		AddDistictElement(arr1[i], arr2, length2);
	}

}

int main() {
	int arr1[10];
	arr1[0] = 10;
	arr1[1] = 10;
	arr1[2] = 10;
	arr1[3] = 50;
	arr1[4] = 50;
	arr1[5] = 70;
	arr1[6] = 70;
	arr1[7] = 70;
	arr1[8] = 90;
	arr1[9] = 90;

	int arr2[10], arr2length = 0;
	srand((unsigned)time(NULL));


	//Print
	cout << "Array 1 element: " << endl;
	Print_Array(10, arr1);

	//Fille array with distinct_Numbers
	FillArray_DistinctNumber(arr1, 10, arr2, arr2length);

	//Print
	cout << "Array 2 Distinct elements: " << endl;
	Print_Array(arr2length, arr2);

	return 0;
}
