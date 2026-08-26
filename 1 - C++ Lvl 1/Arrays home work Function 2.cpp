#include <iostream>
using namespace std;

void Reade_Grades(float x[3]) {
	cout << "enter grade 1: " << endl;
	cin >> x[0];
	cout << "enter grade 2: " << endl;
	cin >> x[1];
	cout << "enter grade 3: " << endl;
	cin >> x[2];
}

void Print_Grades(float x[3]) {
	cout << "**********************" << endl;
	float Avg = (x[0] + x[1] + x[2])/3;
	cout << "the avreage of grades is: "<<Avg << endl;
}

int main() {

	float x[3];
	Reade_Grades(x);
	Print_Grades(x);

	return 0;
}
