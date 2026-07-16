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

void PrintInvertedLetterPattern(int N) {
	//65  90 --> (3)=67

	for (int i = 65 + N - 1; i >= 65 ; i--) {
		for (int x = 65; x <= i; x++) {
			cout << char(i);
		}
		cout << endl;
	}
}

int main() {

	PrintInvertedLetterPattern(ReadPositiveNumber("Enter the positive Number: "));
	
	
	return 0;
}	