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
void PrintPatternNumbers(int N) {
	for (int i = N; i >= 1; i--) {
		for (int x = 1; x <= i; x++) {
			cout << i;
		}
		cout << endl;
	}
}
int main() {

	PrintPatternNumbers(ReadPositiveNumber("Enter the positive Number: "));

	return 0;
}	