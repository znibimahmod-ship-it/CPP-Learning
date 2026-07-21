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
bool IsNumberInArray(int number, int arr[100], int arraylenght) {
	for (int i = 0; i < arraylenght; i++) {
		if (number == arr[i]) {
			return true;
		}
	}
	return false;
}
int main() {
	int lenght = ReadPositiveNumber("Enter number of elements: ");
	int arr1[100];
	int S;
	srand((unsigned)time(NULL));

	//fill array with Random Number 
	for (int i = 0; i < lenght; i++) {
		arr1[i] = RandNumFromTO(1, 100);
	}

	//arr
	cout << "Array 1 elements: " << "\n";
	Print_Array(lenght, arr1);

	cout << "Please enter a number to searche for it: ";
	cin >> S;

	cout << "Number you're looking for is: " << S << endl;
	if (IsNumberInArray(S, arr1, lenght)) {
		cout << "The number is found :-) ";
	}
	else {
		cout << "The number is not found :-( " << endl;
	}
	return 0;
}