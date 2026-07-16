	#include <iostream>
using namespace std;

int main() {

	int Grade;

	cout << "enter your school grade: " << endl;
	cin >> Grade;

	if (Grade >= 90 and Grade <= 100) {
		cout << "your grade is: A" << endl;
	}
	else if (Grade>=80 and Grade<=89) {
		cout << "your grade is: B" << endl;
	}
	else if (Grade >= 70 and Grade <= 79) {
		cout << "your grade is: C" << endl;
	}
	else if (Grade >= 60 and Grade <= 69) {
		cout << "your grade is: D" << endl;
	}
	else if (Grade >= 50 and Grade <= 59) {
		cout << "your grade is: E" << endl;
	}
	else {
		cout << "yout grade is F" << endl;
	}


	return 0;
}