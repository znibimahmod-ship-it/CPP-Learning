#include <iostream>
#include<cmath>
#include<string>
using namespace std;

//// NUMBER ////
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
	srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) + !! put it in the main()
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
/*isPrimeNumber*/
//bool isPrimeNumber(int Num) {
//	if (Num > 1) {
//		for (int i = 2; i < Num; i++) {
//			if (Num % i == 0) {
//				return true;
//			}
//		}
//	}
//	return false;
//}
//enPrime isPrimeNumber(int x) {
//
//	int xR = round(x / 2);
//	for (int i = 2; i <= xR; i++) {
//		if (x % i == 0) {
//			return enPrime::NotPrime;
//		}
//	}
//	return enPrime::isPrime;
//}
/*isPerfectNumber*/
//enPerfect isPerfectNumber(int N) {
//	int sum = 0;
//
//	for (int i = 1; i < N; i++) {
//		if (N % i == 0) {
//			sum += i;
//		}
//	}
//	if (N == sum) {
//		return enPerfect::Perfect;
//	}
//	else {
//		return enPerfect::NotPerfect;
//	}
//}
/*GenerateKey*/
//void GenerateKey(int N) {
//	for (int i = 1; i <= N; i++) {
//		cout << "Key [" << i << "] : ";
//		for (int x = 1; x <= 4; x++) {
//			cout << word(Capital_letter, 4);
//			if (x <= 3) {
//				cout << "-";
//			}
//		}
//		cout << endl;
//	}
//}
/*Random_caracters*/
//int Random_caracters(enCaracter C) {
//	switch (C) {
//	case(small_letter):
//		return rand() % (122 - 97 + 1) + 97;
//		break;
//
//	case(Capital_letter):
//		return rand() % (90 - 65 + 1) + 65;
//		break;
//
//	case(Special_caracter):
//		return rand() % (47 - 33 + 1) + 33;
//		break;
//
//	case(Digit):
//		return rand() % (57 - 48 + 1) + 48;
//		break;
//	}
//}

//// ARRAY ////
void ReverseArray(int lenght, int arr1[100], int arr2[100]) {
	for (int i = 0; i < lenght; i++) {
		arr2[i] = arr1[lenght - 1 - i];
	}
}
void Copy_PrimeNumbers_Array(int OrignalArr_lenght, int OrginalArr[], int& CopyArr_lenght, int CopyArr[]) {
	for (int i = 0; i < OrignalArr_lenght; i++) {
		if (CheckPrimeNumber(OrginalArr[i])) {
			CopyArr[CopyArr_lenght] = OrginalArr[i];
			CopyArr_lenght++;
		}
	}
}
void Copy_Array(int N, int orginal_arr[], int copy_arr[]) {
	for (int i = 0; i < N; i++) {
		copy_arr[i] = orginal_arr[i];
	}
}
void Print_Array(int N, int arr[100]) {
	for (int i = 0; i < N; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {

	return 0;
}