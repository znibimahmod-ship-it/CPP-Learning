#include<iostream>
using namespace std;

enum enDay{sunday=1,Monday=2,tuesday=3,wedneday=4,thursday=5,Friday=6,saturday=7};

int main() {

	int day;
	cout << "enter the numbre of day:(1-7) " << endl; // !! break
	cin >> day;

	enDay N_day;
	N_day = (enDay)day;


	switch (N_day) {
	case enDay::sunday:
		cout << "Sunday: ";
		break;
	case enDay::Monday:
		cout << "Monday: ";
		break;
	case enDay::tuesday:
		cout << "Tuesday: ";
		break;
	case enDay::wedneday:
		cout << "Wednesday: ";
		break;
	case enDay::thursday:
		cout << "Thursday: ";
		break;
	case enDay::Friday:
		cout << "Friday: ";
		break;
	case enDay::saturday:
		cout << "Saturday: ";
		break;
	default:
		cout << "Numbre incorect:" << endl;	
	}
	
	return 0;
}