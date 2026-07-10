#include<iostream>
#include<cmath>
using namespace std;

double Read() {
	double a;

	cout << "to calcute circle area inscreibed in a square enter A: ";
	cin >> a ;

	return a;

}
double Cal_Circle_Area(double a) {
	const double Pi = 3.14159;

	double area = (Pi * pow(a, 2)) / 4;

	return area;
}
void print(double area) {

	cout << "circle area = " << area << endl;

}

int main() {

	double a;

	print(Cal_Circle_Area(Read()));

	return 0;

};
