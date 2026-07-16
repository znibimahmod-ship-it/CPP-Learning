#include<iostream>
using namespace std;

int ReadPositiveNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	while (N < 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
int CalculateDigitFrequency(int N,int digit) {
	int comp = 0;
	while (N > 0) {
		if (N % 10 == digit) {
			comp += 1;
		}
		N /= 10;
	}
	return comp;
}
int main() {
	int N = ReadPositiveNumber("Please enter the main number: ");
	int digit = ReadPositiveNumber("Please enter one Digits to check: ");
	
	cout << "Digit " << digit << " Frequency is " << CalculateDigitFrequency(N, digit) << " Times(s).";

	return 0;
}