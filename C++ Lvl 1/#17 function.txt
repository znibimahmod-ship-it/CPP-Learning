#include<iostream>
using namespace std;

void Read(double& a, double& b) {

	cout << "Enter a and b: ";
	cin >> a >> b;

}
double Cal_Rectangle_Area(double a, double b) {

	double area = (a/2)*(b);

	return area;
}
void print(double area) {

	cout << "triangle area = " << area << endl;

}

int main() {

	double a, b;
	
	Read(a, b);
	print(Cal_Rectangle_Area(a, b));

	return 0;

};