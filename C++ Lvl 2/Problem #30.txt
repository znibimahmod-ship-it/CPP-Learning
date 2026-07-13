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
void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Sum_Of_TwoArray(int lenght,int arr1[100], int arr2[100],int arrSum[100]) {
	for (int i = 0; i < lenght; i++) {
		arrSum[i] = arr1[i] + arr2[i];
	}
	
}
int main() {
	int lenght = ReadPositiveNumber("Enter number of elements for the 2 arrays to get the sum: ");
	int arr1[100], arr2[100], arrSum[100];

	srand(time(0));

	for (int i = 0; i < lenght; i++) {
		arr1[i] = RandNum_FromTO(1,100);
		arr2[i] = RandNum_FromTO(1, 100);
	}
	//arr1
	cout << "Array 1 elements: ";
	Print_Array(lenght, arr1);

	//arr2
	cout << "Array 2 elements: ";
	Print_Array(lenght, arr2);

	//sum
	cout << "Sum of Array 1 and Array 2: ";
	Sum_Of_TwoArray(lenght,arr1,arr2,arrSum);
	Print_Array(lenght, arrSum);

	return 0;
}

