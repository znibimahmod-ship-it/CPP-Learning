#include<iostream>
using namespace std;

int main() {
	float N1;
	float N2;
	string op;

	cout << "enter numbre 1: " << endl;
	cin >> N1;
	cout << "enter numbre 2: " << endl;
	cin >> N2;
	cout << "enter operation: " << endl;
	cin >> op;

	if (op=="+") {
		cout << N1 + N2 << endl;
	}
	else if (op == "-") {
		cout <<"the result is: " << N1 - N2 << endl;
	}
	else if (op == "*") {
		cout << "the result is: " << N1 * N2 << endl;
	}
	else if (op == "/") {
		cout << "the result is: " << N1 / N2 << endl;
	}
	else {
		cout << "operations invalide: " << endl;
	}
	return 0;
}