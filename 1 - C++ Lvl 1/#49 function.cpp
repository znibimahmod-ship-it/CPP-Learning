#include<iostream>
using namespace std;

bool input(){
	int Pin;
	cout << "enter the PIN: " << endl;
	cin >> Pin;

	while (Pin != 1234) {
		cout << "wrong Pin: " << endl;
		system("color 4F");
		cout << "enter the PIN: " << endl;
		cin >> Pin;
	}
	return 1;

}
void Print(bool answers) {
	if (answers) {
		system("color 2F");
		cout << "your balance is: 7500" << endl;
	}
}

int main() {

	Print(input());

	return 0;
}