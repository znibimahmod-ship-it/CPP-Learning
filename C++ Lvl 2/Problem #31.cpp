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
void Fill_Array_From_1toN(int lenght , int arr[100]) {
	for (int i = 0; i < lenght; i++) {
		arr[i] = i + 1;
	}
}
void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
void Swap(int& a,int& b) {
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void Shuffle_Array(int lenght, int arr1[100]) {
	for (int index = 0; index < lenght; index++) { 
		int New_index = RandNumFromTO(0, lenght - 1);
		Swap(arr1[index], arr1[New_index]);
	}
}
int main() {
	int lenght = ReadPositiveNumber("Enter number of elements: ");
	int arr1[100];
	srand(time(0));

	//fill array with 1 to N
	Fill_Array_From_1toN(lenght,arr1);

	//arr1
	cout << "Array elements before shuffle: ";
	Print_Array(lenght, arr1);

	//shuffle
	cout << "Array elements after shuffle: ";
	Shuffle_Array(lenght, arr1);
	Print_Array(lenght, arr1);

	return 0;
}