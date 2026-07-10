#include<iostream>
using namespace std;

enum enPrime { isPrime = 1, NotPrime = 2 };

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

enPrime isPrimeNumber(int x) {

	int xR = round(x/2);
	for (int i = 2; i <= xR; i++) {
		if (x % i == 0)  {
			return enPrime::NotPrime;
		}
	}
	return enPrime::isPrime;
}
void PrintPrimeNumber(int N) {

	for (int i = 2; i <= N; i++) {
		if (isPrimeNumber(i) == enPrime::isPrime) {
			cout << i << endl;
		}

	}

}
int main() {

	PrintPrimeNumber(ReadPositiveNumber("Enter N to print all prime numbers from 1 to N : "));

	return 0;
}