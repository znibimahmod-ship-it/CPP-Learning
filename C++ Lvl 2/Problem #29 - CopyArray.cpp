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

int RandNum_FromTO(int From, int To) {
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}

bool CheckPrimeNumber(int Num) {
	if (Num <= 1) {
		return false;
	}
	for (int i = 2; i < Num; i++) {
		if (Num % i == 0) {
			return false;
		}
	}
	return true;
}
void Copy_PrimeNumbers_Array(int OrignalArr_lenght, int OrginalArr[], int& CopyArr_lenght, int CopyArr[]) {
	for (int i = 0; i < OrignalArr_lenght; i++) {
		if (CheckPrimeNumber(OrginalArr[i])) {
			CopyArr[CopyArr_lenght] = OrginalArr[i];
			CopyArr_lenght++;
		}
	}
}
void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	int arr1[100];
	int arr1_lenght = ReadPositiveNumber("Enter number of elements: ");

	int arr2[100];
	int arr2_lenght = 0;
	srand(time(0));

	for (int i = 0; i < arr1_lenght; i++) {
		arr1[i] = RandNum_FromTO(1,100);
	}
	//1
	cout << "Array elements: ";
	Print_Array(arr1_lenght, arr1);

	//2
	cout << "Prime numbers elements: ";
	Copy_PrimeNumbers_Array(arr1_lenght, arr1, arr2_lenght, arr2);
	Print_Array(arr2_lenght, arr2);

	return 0;
}