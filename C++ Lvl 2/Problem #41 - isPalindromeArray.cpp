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
void FillArray(int arr[100], int& length) {
	length = 6;

	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 30;
	arr[4] = 20;
	arr[5] = 10;

}
//First Function Solution

//bool IsPalindromeArray(int arr[100], int length) {
//	// the case if Array length is Odd the middle number 
//	// we don't compare it because is the start point (it repeated in the two side)
//
//	int comp = 0;
//	int OtherSide = length - 1;
//
//	for (int i = 0; i < (length / 2); i++) {
//		if (arr[i] == arr[OtherSide]) {
//			comp++;
//		}
//		OtherSide--;
//	}
//
//	if (comp == length / 2) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}

//Second Function Solution (Best Practice)

bool IsPalindromeArray(int arr[100], int length) {

	for (int i = 0; i < length / 2; i++) {

		if (arr[i] != arr[length - i - 1]) {//[10 20 20 20 10]
			return false;
		}

	}

	return true;
}
int main() {
	int arr[10], length = 6;
	srand((unsigned)time(NULL));

	//fillArray
	FillArray(arr, length);

	//Check if Array is Palindrome
	if (IsPalindromeArray(arr, length)) {
		cout << "Yes array is Palindorme ";
	}
	else {
		cout << "No array is not Palindorme ";
	}

	return 0;
}
