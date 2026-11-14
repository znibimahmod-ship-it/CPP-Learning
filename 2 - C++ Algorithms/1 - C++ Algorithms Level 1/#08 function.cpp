#include<iostream>
using namespace std;

enum enM{Pass=1,Fail=2};

int Read() {
	int Mark;
	
	cout << "enter the Mark: " << endl;
	cin >> Mark;

	return Mark;
}

enM Chek(int Mark) {
	
	if (Mark >= 50) {
		return enM::Pass;
	}  
	else {
		return enM::Fail;
	}
}

void Print(enM M) {
	if (M == enM::Pass) {
		cout << "your good: " << endl;
	}
	else if(M == enM::Fail) {
		cout << "your not good: " << endl;
	}
}

int main() {
	Print(Chek(Read()));
	return 0;
};