#include <iostream>
using namespace std;

void Reade_Grades(float grades[3]) {
	cout << "enter grade 1: " << endl;
	cin >> grades[0];
	cout << "enter grade 2: " << endl;
	cin >> grades[1];
	cout << "enter grade 3: " << endl;
	cin >> grades[2];
}

void Print_Grades(float grades[3]) {
	cout << "grade nombre 1: "<< grades[0] << endl;
	cout << "grade nombre 2: "<< grades[1] << endl;
	cout << "grade nombre 3: "<< grades[2] << endl;
}

float AVG_Grades(float grades[3]) {
	float Avg = (grades[0] + grades[1] + grades[2]) /3;
	return Avg;
}

int main() {

	float grades[3];
	Reade_Grades(grades);
	Print_Grades(grades);
	cout <<"the average of grades is: " << AVG_Grades(grades);

	return 0;
}
