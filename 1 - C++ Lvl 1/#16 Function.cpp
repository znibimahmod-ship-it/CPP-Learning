#include<iostream>
#include<cmath>
using namespace std;

void Read(double& a, double& b) {

	cout << "to calculate rectamgle area through diagonal and side area of rectangle :\n";
	cout << "give a and b : ";
	cin >> a >> b;

}
double Cal_Rectangle_Area(double a, double b) {

	double area = a * sqrt(pow(b, 2) - pow(a,2));

	return area;

}
void print(double area) {

	cout << "rectamgle area through diagonal and side area of rectangle = " << area << endl;

}

int main() {

	double a, b;
	
	Read(a, b);
	print(Cal_Rectangle_Area(a, b));

	return 0;

};