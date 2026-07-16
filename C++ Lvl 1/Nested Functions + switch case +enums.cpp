#include <iostream>
using namespace std;

void menu() {
	cout << "************************" << endl;
	cout << "       Week Days        " << endl;
	cout << "************************" << endl;
	cout << "1:Sunday" << endl;
	cout << "2:Monday" << endl;
	cout << "3:tuesday" << endl;
	cout << "4:wedensday" << endl;
	cout << "5:thersday" << endl;
	cout << "6:Fraiday" << endl;
	cout << "7:saturday" << endl;
	cout << "************************" << endl;
}

enum enDay { sunday = 1, Monday = 2, tuesday = 3, wedneday = 4, thursday = 5, Friday = 6, saturday = 7 };

enDay enreade() {

	int x;
	cout << "enter your numbre: " << endl;///ما نقدرش ندير - reference لشي حاجة ما عندهاش اسم فالميموار
	cin >> x;
	enDay DAY;
	DAY = (enDay)x;
	return DAY;
}

void choise(enDay DAY) {
	switch (DAY) {
	case enDay::sunday:
		cout << "today is: Sunday" << endl;
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
		cout << "Wrong day: " << endl;
	}
}
 
int main() {

	menu();
	choise(enreade());

	return 0;
