#include<iostream>;
using namespace std;

void Read(int& N) {
	cout << "enter the number N (factorial): ";
	cin >> N;
}

int Fact(int N) {
	int fact = 1;
	for (int i = 1; i <= N; i++) {
		fact *= i;
	}
	return fact;
}

void Print(int fact) {
	cout << "factorial is: " << fact;
}

int main() {
	int N;

	Read(N);

	Print(Fact(N));
	

	return 0;
}  