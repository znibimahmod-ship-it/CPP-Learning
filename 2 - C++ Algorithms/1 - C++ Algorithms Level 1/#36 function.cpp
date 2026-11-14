#include<iostream>
using namespace std;

enum enOP{ addition = '+', subtraction = '-', Multiplication = '*', division = '/' };

int Read(string message) {
	int N;

	cout << message;
	cin >> N;

	return N;
}
enOP Read_OP() {
	char OP;

	cout << "enter operation: \naddition = '+' \nsubtraction = '-' \nMultiplication = '*' \ndivision = '/' " << endl;
	cin >> OP;

	return static_cast<enOP>(OP); 
}
int Calcule_op(int N1,int N2,enOP OP) {
	switch (OP) {
	case enOP::addition:
		return N1 + N2 ;
	case enOP::subtraction:
		return N1 - N2;
	case enOP::Multiplication:
		return N1 * N2;
	case enOP::division:
		return N1 / N2;
	default:
		cout << "operation incorect: " << endl;
		return 0;
	}
}
void Print(int result) {
	cout << "the result is: " << result;
}
int main() {

	int Number_1 = Read("enter the number 1: ");
	int Number_2 = Read("enter the number 2: ");

	Print(Calcule_op(Number_1, Number_2, Read_OP()));

	return 0;
}  
