#include<iostream>
using namespace std;

int ReadPositiveNumber(string message,int& N) {
	cout << message;
	cin >> N;
	while (N <= 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
int ReverceNumber(int N) {
	int reverse = 0;
	while (N > 0) {//1234
		int lastN = N % 10;
		int remainder = N / 10;//123


		reverse = reverse * 10 + lastN;//4321

		N = remainder;
	}
	return reverse;
}

int main() {
	int N;
	
	if (ReverceNumber(ReadPositiveNumber("enter the number to know if Palindrome: ", N)) == N) {
		cout << "Palindrome";
	}
	else {
		cout << "Not Palindrome";
	}
	return 0;
}