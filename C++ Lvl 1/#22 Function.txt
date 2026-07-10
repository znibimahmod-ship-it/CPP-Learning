#include<iostream>
using namespace std;

void Read(double& a, double& b) {
	cout << "to calculate circle area inscreabe in on an isoscles tringle :" << endl;
	cout << "give a and b: " << endl;
	cin >> a >> b;
}

double Cal_Circle_Area(double a, double b) {
	const double Pi = 3.14159;

	double area = Pi * (pow(b, 2) / 4) * ((2 * a - b)/(2 * a + b));

	return area;
}

void print(double area) {
	cout << "circle area = " << area << endl;
}

int main() {	
	double a;
	double b;

	Read(a, b);
	print(Cal_Circle_Area(a, b));

	return 0;
};

