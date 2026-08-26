#include<iostream>
using namespace std;

int main() {
	string Month;

	cout << "enter from 1 to 12 to get the month: " << endl;
	cin >> Month;

	if (Month=="1") {
		cout << "Month is: january" << endl;
	}
	else if (Month == "2") {
		cout << "Month is: February";
	}
	else if (Month == "3") {
		cout << "Month is: March";
	}
	else if (Month == "4") {
		cout << "Month is: April";
	}
	else if (Month == "5") {
		cout << "Month is:  May";
	}
	else if (Month == "6") {
		cout << "Month is: June";
	}
	else if (Month == "7") {
		cout << "Month is: July";
	}
	else if (Month == "8") {
		cout << "Month is: August";
	}
	else if (Month == "9") {
		cout << "Month is: September";
	}
	else if (Month == "10") {
		cout << "Month is: October";
	}
	else if (Month == "11") {
		cout << "Month is: November";
	}
	else if (Month == "12") {
		cout << "Month is: December";
	}
	else {
		cout << "wrong month";
	}
	return 0;
}