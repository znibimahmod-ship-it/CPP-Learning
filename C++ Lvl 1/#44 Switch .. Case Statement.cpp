#include<iostream>
using namespace std;

int main() {
	int Day;

	cout << "enter the numbre of day (1-7)" << endl;
	cin >> Day;
	
	switch (Day) {
	case 1:
		cout << "it's Monday" << endl;
		break;
	
	case 2:
		cout << "it's tuseday" << endl;	
		break;
	case 3:
		cout << "it's wednesday" << endl;
		break;
	case 4:
		cout << "it's thusday" << endl;
		break;
	case 5:
		cout << "it's Friday" << endl;
		break;
	case 6:
		cout << "it's saturday" << endl;
		break;
	case 7:
		cout << "it's sunday" << endl;
		break;
	default:
		cout << "wrong day: " << endl;
		}	
	return 0;
}