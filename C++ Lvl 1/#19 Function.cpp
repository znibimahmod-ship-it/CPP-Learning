#include<iostream>
#include<cmath>
using namespace std;

void Read(double& a) {

	cout << "to calcute circle area throught diameter enter D: ";
	cin >> a ;

}
double Cal_Circle_Area(double a) {
	const double Pi = 3.14159;

	double area = (Pi * pow(a, 2)) / 4;

	return area;
}
void print(double area) {

	cout << "circle area throught diameter = " << area << endl;

}

int main() {

	double a;

	Read(a);
	print(Cal_Circle_Area(a));

	return 0;

};