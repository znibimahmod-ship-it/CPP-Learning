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
	//srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}

void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

void ReverseArray(int lenght,int arr1[100],int arr2[100]) {
	for (int i = 0; i < lenght; i++) {
		arr2[i] = arr1[lenght - 1 - i];
	}
}


int main() {
	int lenght = ReadPositiveNumber("Enter number of elements: ");
	int arr1[100];
	int arr2[100];
	srand((unsigned)time(NULL));

	//fill array with Random Number 
	for (int i = 0; i < lenght; i++) {
		arr1[i] = RandNumFromTO(1, 100);
	}

	//arr1
	cout << "Array elements before reverce: ";
	Print_Array(lenght, arr1);
	
	//reverce
	ReverseArray(lenght,arr1,arr2);
	cout << "Array elements after reverce: ";
	Print_Array(lenght, arr2);

	return 0;
}