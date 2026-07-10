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
int ReverceNumber(int N) {
	int reverce = 0;
	while (N > 0) {
		int lastN = N % 10;
		int remainder = N / 10;

		reverce = reverce * 10 + lastN;

		N = remainder;
	}
	return reverce;
}
void PrintDigits(int ReverceNumber) {
	while (ReverceNumber > 0) {
		int lastN = ReverceNumber % 10;
		int remainder = ReverceNumber / 10;

		cout << lastN << endl;

		ReverceNumber = remainder;
	}
}
int main() {
	int N;
	
	PrintDigits(ReverceNumber(ReadPositiveNumber("enter a positive number: ")));

	return 0;
}