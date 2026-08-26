#include<iostream>
using namespace std;

int main() {
	int N;
	int i = 1;
	int f=1;

	cout << "enter the N number (sum odd numbers): " << endl;
	cin >> N;

	if (N > 0) {
		while (i<=N) {
			f *= i;
			i++;
		}
	}
	else {
		cout << "the number must be positive: " << endl;
	}
	return 0;
}