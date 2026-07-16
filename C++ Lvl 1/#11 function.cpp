#include<iostream>
using namespace std;
enum enPass{Pass=1,Fail=2};

void Read(int& N1, int& N2,int& N3) {

	cout << "enter number 1: " << endl;
	cin >> N1;

	cout << "enter number 2: " << endl;
	cin >> N2;

	cout << "enter number 3: " << endl;
	cin >> N3;
}

float Average(int N1, int N2, int N3) {

	float Avg = float(N1 + N2 + N3) / 3;

	return Avg;
}

enPass Check(float Avg) {
	if (Avg >= 50) {
		return enPass::Pass;
	}
	else {
		return enPass::Fail;
	}
	
}

void Print(enPass P_or_F,float AVG) {
	
	cout << "your average is:" << AVG << endl;

	if (P_or_F == enPass::Pass) {
		cout << "Pass" << endl;
	}
	else {
		cout << "Fail" << endl;
	}
}

int main() {

	int N1, N2, N3;

	Read(N1, N2, N3);

	float AVG = Average(N1, N2, N3);

	Print(Check(Average(N1, N2, N3)),AVG);

	return 0;

};