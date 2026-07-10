#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "to calculate factoriel N (enter N): " << endl;
	cin >> N;

	int fact=1;
	
	for (int i = 1; i <= N;i++) {
		fact *=i;
	}

	cout << "The Factorial of " << N << " is: " << fact << endl;

	return 0;
};