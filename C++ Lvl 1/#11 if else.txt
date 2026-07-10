#include <iostream>
using namespace std;

int main() {


	float Mark_1;
	float Mark_2;
	float Mark_3;

	cout << "enter your Mark 1: " << endl;
	cin >> Mark_1;

	cout << "enter your Mark 2: " << endl;
	cin >> Mark_2;

	cout << "enter your Mark 3: " << endl;
	cin >> Mark_3;

	float AVG = (Mark_1 + Mark_2 + Mark_3)/3;

	if (AVG>=50) {
		cout << "PASS" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
	return 0;
}