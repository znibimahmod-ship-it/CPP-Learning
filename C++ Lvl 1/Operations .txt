#include <iostream>
using namespace std;

enum enOP { Addition = 1, Subtraction = 2, Multiplication = 3, Division = 4 };
struct stdata {
	float number_1;
	float number_2;
	enOP operation;
};
stdata read_Num() {
	stdata data;
	cout << "enter The number 1: " << endl;
	cin >> data.number_1;


	cout << "enter The number 2: " << endl;
	cin >> data.number_2;

	int OP;
	cout << "enter The Operation (1 = +) (2 = -) (3 = *) (4 = /): " << endl;
	cin >> OP;

	data.operation = (enOP)OP;

	return data;
};

float Operation(stdata data) {
	if (data.operation == 1) {
		return data.number_1 + data.number_2;
	}
	else if (data.operation == 2) {
		return data.number_1 - data.number_2;
	}
	else if (data.operation == 3) {
		return data.number_1 * data.number_2;
	}
	else if (data.operation == 4) {
		return data.number_1 / data.number_2;
	}
	else {
		return 0;
	}
};

void Print(float OP) {
	cout << "the result is: " << endl;
	cout << OP;
};


int main() {
	
	Print(Operation(read_Num()));

	return 0;
}