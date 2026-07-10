#include <iostream>
using namespace std;

void menu() {
	cout << "************************" << endl;
	cout << "       Week Days" << endl;
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
void reade(int &x) {
	cout << "enter your numbre: " << endl;
	cin >> x;
}
void choise(int &x) {
	switch (x) {
	case 1:
		cout << "today is: Sunday" << endl;
		break;
	case 2:
		cout << "Monday: ";
		break;
	case 3:
		cout << "Tuesday: ";
		break;
	case 4:
		cout << "Wednesday: ";
		break;
	case 5:
		cout << "Thursday: ";
		break;
	case 6:
		cout << "Friday: ";
		break;
	case 7:
		cout << "Saturday: ";
		break;
	default:
		cout << "Wrong day: " << endl;
	}
}
int main() {

	int N;
	menu();
	reade(N);
	choise(N);
	
	return 0;
}


#include <iostream>
//using namespace std;
//
//void menu() {
//	cout << "************************" << endl;
//	cout << "       Week Days        " << endl;
//	cout << "************************" << endl;
//	cout << "1:Sunday" << endl;
//	cout << "2:Monday" << endl;
//	cout << "3:tuesday" << endl;
//	cout << "4:wedensday" << endl;
//	cout << "5:thersday" << endl;
//	cout << "6:Fraiday" << endl;
//	cout << "7:saturday" << endl;
//	cout << "************************" << endl;
//}
//int reade() {
//	int x;
//	cout << "enter your numbre: " << endl;///ما نقدرش ندير - reference لشي حاجة ما عندهاش اسم فالميموار
//	cin >> x;
//
//	return x;
//}
//void choise(int x) {
//	switch (x) {
//	case 1:
//		cout << "today is: Sunday" << endl;
//		break;
//	case 2:
//		cout << "Monday: ";
//		break;
//	case 3:
//		cout << "Tuesday: ";
//		break;
//	case 4:
//		cout << "Wednesday: ";
//		break;
//	case 5:
//		cout << "Thursday: ";
//		break;
//	case 6:
//		cout << "Friday: ";
//		break;
//	case 7:
//		cout << "Saturday: ";
//		break;
//	default:
//		cout << "Wrong day: " << endl;
//	}
//}
//int main() {
//
//	menu();
//	choise(reade());
//	
//	return 0;
//}