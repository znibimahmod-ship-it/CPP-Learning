#pragma once
#include <iostream>;
#include "Number.h"
using namespace std;

namespace Array {

	void FillArrayWithRandomNumber(int arr[100], int& length) {

		length = Number::ReadPositiveNumber("enter much number Random you want: ");

		for (int i = 0; i < length - 1; i++) {
			arr[i] = Number::RandNumFromTO(1, 100);
		}
	}

	void Copy_Array(int N, int orginal_arr[], int copy_arr[]) {
		for (int i = 0; i < N; i++) {
			copy_arr[i] = orginal_arr[i];
		}
	}

	void ReverseArray(int lenght, int arr1[100], int arr2[100]) {
		for (int i = 0; i < lenght; i++) {
			arr2[i] = arr1[lenght - 1 - i];
		}
	}

	void Copy_PrimeNumbers_Array(int OrignalArr_lenght, int OrginalArr[], int& CopyArr_lenght, int CopyArr[]) {
		for (int i = 0; i < OrignalArr_lenght; i++) {
			if (Number::CheckPrimeNumber(OrginalArr[i])) {
				CopyArr[CopyArr_lenght] = OrginalArr[i];
				CopyArr_lenght++;
			}
		}
	}

	void Print_Array(int length, int arr[100]) {
		for (int i = 0; i < length; i++) {
			cout << arr[i] << " ";
		}
		cout << endl;
	}

	int Find_Number_Position_In_Array(int number, int arr[100], int arraylenght) {
		for (int i = 0; i < arraylenght; i++) {
			if (number == arr[i]) {
				return i;
			}
		}
		return -1;
	}

	void AddElementToArray(int length, int arr[100]) {
		int element;

		cout << "Please enter a number : ";
		cin >> element;

		arr[length] = element;
	}

	void AddInputToArray(int arr1[100], int& length) {
		int N;
		bool AddMore = true;
		do {

			AddElementToArray(length, arr1);

			cout << "Do you want to add more numbers? [0]:No / [1]:Yes";
			cin >> AddMore;
			if (AddMore) {
				length++;
			}
		} while (AddMore);
	}


}