#include <iostream>
using namespace std;
int main()
{
	double L, Area;
	const double PI = 3.14;
	cout << "to calculate circle area along the circumference \n";
	cout << "enter the L: ";
	cin >> L;

	Area = Area =L*L/(4*PI);

	cout << "Area= " << Area;

	return 0;
}