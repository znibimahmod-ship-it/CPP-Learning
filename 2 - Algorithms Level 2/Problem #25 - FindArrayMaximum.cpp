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
int Min_Array(int N, int arr[100]) {
	int Min = arr[0];
	for (int i = 0; i < N; i++) {
		if (arr[i] < Min) {
			Min = arr[i];
		}
	}
	return Min;
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

	cout << "Min number is: " << Min_Array(arrNum, arr);

	return 0;
}