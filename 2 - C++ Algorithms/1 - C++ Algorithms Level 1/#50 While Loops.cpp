#include<iostream>
using namespace std;


int main() {

	int com = 0;
	string Pin;

	cout << "enter the Pin (you have 3 times): " << endl;
	cin >> Pin;

	while (com < 3) {
		if (Pin=="1234") {
			cout << "good pin";
			break;
		}
		else if (Pin != "1234") {
			cout << "wrong Pin try again: ";
			cin >> Pin;
			com++;
			if (com>=4) {
				cout << "divice Blocked: ";
				break;
			}
		}
	}

	return 0;
};