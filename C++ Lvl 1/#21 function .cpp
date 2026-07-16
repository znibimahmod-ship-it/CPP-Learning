#include<iostream>
using namespace std;

void Read(double& a) {

	cout << "to calculate circle area along the circumference give L: ";
	cin >> a ;

}
double Cal_Circle_Area(double a) {
	const double Pi = 3.14159;

	double area = pow(a, 2) / (4 * Pi);

	return area;
}
void print(double area) {

	cout << "circle area = " << area << endl;

}

int main() {	

	double a;

	Read(a);
	print(Cal_Circle_Area(a));

	return 0;

};

