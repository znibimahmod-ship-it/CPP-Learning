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
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}

void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int Sum_Array(int N, int arr[100]) {
	int Sum = 0;
	for (int i = 0; i < N; i++) {
		Sum += arr[i];
	}
	return Sum;
}
int ArrayAverage(int N, int arr[100]) {
	int Sum = Sum_Array(N, arr);

	return Sum / N;
}

int main() {
	int arrNum = ReadPositiveNumber("Enter number of elements: ");
	int arr[100];
	srand(time(0));

	for (int i = 0; i < arrNum; i++) {
		arr[i] = RandNumFromTO(1,100);
	}

	cout << "Array Element: ";
	Print_Array(arrNum,arr);

	cout << "Avg of all numbers is: " << ArrayAverage(arrNum, arr);

	return 0;
}