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
void Print_Array(int length, int arr[100]) {

	for (int i = 0; i < length - 1; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}
int RandNumFromTO(int From, int To) {
	////srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
	int RanNum = rand() % (To - From + 1) + From;

	return RanNum;
}
void FillArrayWithRandomNumber(int arr[100], int& length) {

	length = ReadPositiveNumber("enter much number Random you want: ");

	for (int i = 0; i < length - 1; i++) {
		arr[i] = RandNumFromTO(1, 100);
	}
}
int CheckEvenInArray(int arr[100], int length) {
	int comp = 0;

	for (int i = 0; i < length - 1; i++) {
		if (arr[i] % 2 == 0) {
			comp += 1;
		}
	}
	return comp;
}
int main() {
	int arr[100], length = 0;
	srand((unsigned)time(NULL));

	//fillArray
	FillArrayWithRandomNumber(arr, length);

	//Print 
	cout << "Array elements: ";
	Print_Array(length, arr);

	cout << "Evem Numbers count is: " << CheckEvenInArray(arr, length);

	return 0;
}
