#include<iostream>
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
int SumDigitsNumber(int N) {
	int sum = 0;

	while (N > 0) {
		int lastN = N % 10;
		N /= 10;
		sum += lastN;
	}
	return sum;
}

int main() {

	cout << SumDigitsNumber(ReadPositiveNumber("enter the positive number to take the sum Digits: "));
	

	return 0;
}