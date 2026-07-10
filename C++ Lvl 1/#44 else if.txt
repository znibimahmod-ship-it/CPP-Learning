#include<iostream>
using namespace std;

int main() {
	string Day;

	cout << "enter the numbre of day (1-7)" << endl;
	cin >> Day;
	
	if (Day == "1") {
		cout << "it's Monday" << endl;
	}
	else if (Day == "2") {
		cout << "it's tuseday" << endl;
	}
	else if (Day == "3") {
		cout << "it's wednesday" << endl;
	}
	else if (Day == "4") {
		cout << "it's thusday" << endl;
	}
	else if (Day == "5") {
		cout << "it's Friday" << endl;
	}
	else if (Day == "6") {
		cout << "it's saturday" << endl;
	}
	else if (Day == "7") {
		cout << "it's sunday" << endl;
	}
	else {
		cout << "Wrong day" << endl;
	}
	return 0;
}