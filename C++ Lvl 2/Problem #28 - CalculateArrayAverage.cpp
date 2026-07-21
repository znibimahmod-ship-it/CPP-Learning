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
void Copy_Array(int N,int orginal_arr[],int copy_arr[]) {

	for (int i = 0; i < N; i++) {
		copy_arr[i] = orginal_arr[i];
	}
}

int main() {
	int arrNum = ReadPositiveNumber("Enter number of elements: ");
	int arr[100];
	int arr_2[100];
	srand(time(0));

	for (int i = 0; i < arrNum; i++) {
		arr[i] = RandNumFromTO(1,100);
	}
	//1
	cout << "Array 1 elements: ";
	Print_Array(arrNum,arr);

	//2
	cout << "Array 2 elements: ";
	Copy_Array(arrNum, arr,arr_2);
	Print_Array(arrNum, arr_2);

	return 0;
}