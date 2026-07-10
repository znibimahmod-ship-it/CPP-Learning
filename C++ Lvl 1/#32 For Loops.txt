#include<iostream>
using namespace std;

int main() {

	int N;
	int P;

	cout << "Numbre: " << endl;
	cin >> N;
	cout << "Power: " << endl;
	cin >> P;

	int power=1;

	for (int i = 1; i <= P;i++) {
		
		power *= N;
	}

	cout << "the power " << N << " of number: " << P << "= " << power;

	return 0;
};