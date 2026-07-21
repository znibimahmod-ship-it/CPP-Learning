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
void PrintRevercedNumber(int N) {

	int NumbeReverced = 0;

	while (N > 0) {
		int lastN = N % 10;
		N /= 10;       

		NumbeReverced = NumbeReverced * 10 + lastN; 
	}
	cout << NumbeReverced;

}
int main() {

	PrintRevercedNumber(ReadPositiveNumber("enter the positive number to take the reverce: "));


	return 0;
}


