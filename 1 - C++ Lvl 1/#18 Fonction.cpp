#include<iostream>
#include<cmath>
using namespace std;


void Read(double& a) {

	cout << "Enter a: ";
	cin >> a ;

}
double Cal_Circle_Area(double a) {
	const double Pi = 3.14;

	double area = Pi * pow(a,2);

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
