#include <iostream>
#include <string>

using namespace std;

int main() {

	string x = "mahmoud-ze nibi";
	
	cout << x[0] << endl;
	cout << x[1] << endl;
	cout << x[7] << endl;
	cout << x[10] << endl;

	int y[6] = {1,2};
	y[2] = 3;
	y[3] = 4;
	cout << "y[5]= " << endl; cin >> y[5];
	cout << y[5] <<"+"<< y[0]<<"="<<y[5]+y[0];
	
	float grade[3];

	cout << "enter grade 1: " << endl;
	cin >> grade[0];

	cout << "enter grade 2: " << endl;
	cin >> grade[1];

	cout << "enter grade 3: " << endl;
	cin >> grade[2];

	float AVG = (grade[0] + grade[1] + grade[2]) / size(grade);
	cout << "*******************************" << endl;
	cout << "the avreage of greads is: " << AVG << endl;

	return 0;
};