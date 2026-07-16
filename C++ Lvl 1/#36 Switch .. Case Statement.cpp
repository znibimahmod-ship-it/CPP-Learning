#include<iostream>
using namespace std;

enum enCal{addition=1,subtraction=2,Multiplication=3,division=4};

int main() {
	float N1;
	float N2;
	int op;
	int Calcule;

	cout << "enter numbre 1: " << endl;
	cin >> N1;
	cout << "enter numbre 2: " << endl;
	cin >> N2;
	cout << "enter operation:(addition=1,subtraction=2,Multiplication=3,division=4) " << endl;
	cin >> op;

	Calcule = (enCal)op;

	switch (op) {
	case enCal::addition:
		cout << N1 + N2 << endl;
		break;
	case enCal::subtraction:
		cout << N1 - N2;
		break;
	case enCal::Multiplication:
		cout << N1 * N2;
		break;
	case enCal::division:
		cout << N1 - N2;
		break;
	default:
		cout << "operation incorect: " << endl;
		break;
	}

	return 0;
}