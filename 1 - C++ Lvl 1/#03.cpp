#include<iostream>
using namespace std;

enum enNumber { Even = 1, Odd = 2 };
int Read() {
	int Num;
	cout << "enter the number: " << endl;
	cin >> Num;
	return Num;
}
enNumber Check(int Num) {
	if (Num % 2 == 0) {
		return enNumber::Even;
	}
	else {
		return enNumber::Odd;
	}
}
void NumberType(enNumber NumberType) {
	if (NumberType == enNumber::Even) {
		cout << "number Even";
	}
	else if(NumberType == enNumber::Odd){
		cout << "number odd";
	}
}
int main() {
	NumberType(Check(Read()));
	return 0;
}