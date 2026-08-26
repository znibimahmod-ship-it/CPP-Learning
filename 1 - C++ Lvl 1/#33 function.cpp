#include<iostream>;
using namespace std;

int Read() {
	int Grade;

	cout << "enter your school grade: " << endl;
	cin >> Grade;

	return Grade;
}
void Chek_Grade(int Grade) {
	if (Grade>=0 && Grade<=100) {
	if (Grade >= 90 and Grade <= 100) {
			cout << "your grade is: A" << endl;
		}
		else if (Grade >= 80 and Grade <= 89) {
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
	}
	else {
		cout << "number must be between 0 and 100: ";
	}
	
}

int main() {
	
	Chek_Grade(Read());

	return 0;
}  