#include <iostream>
using namespace std;

int main() {


	int Mark;

	cout << "enter your Mark: " << endl;
	cin >> Mark;


	if (Mark>=50) {
		cout << "PASS" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
	return 0;
}