#include<iostream>
using namespace std;

void Read(double& a, double& b, double& c) {
	cout << "to calculate circle area Inscribed in an Isosceles Triangle : " << endl;
	cout << "give a and b and c: " << endl;
	cin >> a >> b >> c;
}

double Cal_Circle_Area(double a, double b, double c) {
	const double Pi = 3.14159;
	double p = (a + b + c) / 2;

	double T = ((a * b * c) / (4 * sqrt(p * (p - a) * (p - b) * (p - c))));
	double area = Pi * pow(T, 2);

	return area;
}

void print(double area) {
	cout << "circle area = " << area << endl;
}

int main() {	
	double a,b,c;

	Read(a, b,c);
	print(Cal_Circle_Area(a, b, c));

	return 0;
};

