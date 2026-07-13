#include <iostream>
using namespace std;

int main() {


	int Age;
	bool Driver_license;

	cout << "enter your age: " << endl;
	cin >> Age;

	cout << "do you have a driving license (true=1 or false=0)" << endl;
	cin >> Driver_license;

	if (Age>21 and Driver_license==true) {
		cout << "you're Hired" << endl;
	}
	else {
		cout << "you're Rejected" << endl;
	}
	return 0;
}