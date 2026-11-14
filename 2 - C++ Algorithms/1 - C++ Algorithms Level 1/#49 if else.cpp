#include <iostream>
using namespace std;

int main() {


	string PIN;

	cout << "enter your PIN: " << endl;
	cin >> PIN;


	if (PIN == "1234") {
		cout << "your Balance is: 7500DH " << endl;
	}
	else {
		cout << "Wrong PIN" << endl;
	}
	return 0;
}