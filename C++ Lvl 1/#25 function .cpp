#include<iostream>
using namespace std;

void Read(int& age) {
	cout << "enter your age: " << endl;
	cin >> age;
}

bool Check(int age) {

	if (age >= 18 && age <= 45) {
		return true;
	}
	else {
		return false;
	}
}

void Print(bool Answer, int& age) {

	while (Answer == false) {
		cout << "no good" << endl;
		Read(age);
		Answer = Check(age);
	};
	cout << "good";
}

int main() {
	int age;

	Read(age);
	Print(Check(age),age);

	return 0;
}
#include<iostream>
//using namespace std;
//
//enum enAge { agree = 1, not_agree = 2 };
//
//void Read(int& age) {
//	cout << "enter your age: " << endl;
//	cin >> age;
//}
//
//enAge Check(int age) {
//
//	if (age >= 18 && age <= 45) {
//		return agree;
//	}
//	else {
//		return not_agree;
//	}
//}
//
//void Print(enAge Answer,int& age) {
//	while (Answer == not_agree) {
//		cout << "not good: " << endl;
//		Read(age);
//		Answer = Check(age);
//	};
//	cout << "you're Accpted: ";
//}
//
//int main() {
//	int age;
//
//	Read(age);
//	Print(Check(age),age);
//
//	return 0;
//}