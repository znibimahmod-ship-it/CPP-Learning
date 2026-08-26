#include<iostream>
#include<string>
using namespace std;

enum enPrime{ Prime = 1,NotPrime = 2 };

int Read() {
	int N;

	cout << "enter the first number (-99 to calculate the sum):" << endl;
	cin >> N;

	return N;
}
enPrime CheckPrime(int N) {
	if (N<=1) {
		return enPrime::NotPrime;
	}
	for (int i = 2; i < N; i++) {
		if (N%i==0) {
			return enPrime::NotPrime;
		}
	}
	return enPrime::Prime;
}
void Print(enPrime result) {
	if (result == Prime) {
		cout << "Number is: Prime" << endl;
	}
	else {
		cout << "Number is: Not Prime" << endl;
	}
}
int main() {

	Print(CheckPrime(Read()));

	return 0;
}  
