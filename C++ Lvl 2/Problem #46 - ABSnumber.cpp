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
int MY_ABS(int Number) {
	if (Number < 0) {
		Number = Number * -1;
	}

	return Number;
}
int main() {
	int N;

	cout << "enter the number to get the abslut value : ";
	cin >> N;

	cout << "My abs Result: " << MY_ABS(N) << endl;
	cout << "C++ abs Result: " << abs(N) << endl;

	return 0;
}
