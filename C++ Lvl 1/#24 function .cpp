#include<iostream>
using namespace std;

enum enStatus { agree = 1, not_agree = 2 };

void Read(int& age) {
	cout << "Enter your age: ";
	cin >> age;
}

enStatus Check(int age) {

	if (age >= 18 && age <= 45) {
		return enStatus::agree;
	}
	else {
		return enStatus::not_agree;
	}
}

void Print(enStatus Answer) {
	if (Answer == agree) {
		cout << "you're Accepted: ";
	}
	else {
		cout << "you're not Accepted: ";
	}
}

int main() {
	int age;

	Read(age);
	Print(Check(age));

	return 0;
}