#include<iostream>
using namespace std;

enum enPerfect { Perfect = 1, NotPerfect = 2 };

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

enPerfect isPerfectNumber(int N) {
	int sum = 0;

	for (int i = 1; i < N; i++) {
		if (N % i == 0) {
			sum += i;
		}
	}
	if (N == sum) {
		return enPerfect::Perfect;
	}
	else {
		return enPerfect::NotPerfect;
	}
}
void Print(int N) {

	for (int i = 1; i <= N; i++) {
		if (isPerfectNumber(i) == Perfect) {
			cout << i << endl;
		}
	}

}

int main() {


	Print(ReadPositiveNumber("enter the Number from 1 to N to know all Perfect Number: "));

	return 0;
}