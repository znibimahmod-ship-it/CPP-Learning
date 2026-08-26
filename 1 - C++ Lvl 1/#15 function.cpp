#include<iostream>
using namespace std;

void Read(double& a, double& b) {

	cout << "Enter rectangle sides a and b: ";
	cin >> a >> b;

}
double Cal_Rectangle_Area(double a, double b) {

	return a * b;

}
void print(double area) {

	cout << "Rectangle area = " << area << endl;

}

int main() {

	double a, b;
	
	Read(a, b);
	print(Cal_Rectangle_Area(a, b));

	return 0;

};