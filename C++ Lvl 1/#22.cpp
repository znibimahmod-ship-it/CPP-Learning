#include <iostream>
using namespace std;
int main()
{
	double a, c, Area;
	const double Pi = 3.14;
	
	cout << "to calculate circle area Incrideb in an Isosceles Triangle:\n";
	cout << "Enter a and c : ";
	cin >> a >> c;

	Area = (Pi * ((c * c) / 4) * ((2 * a) - c) / ((2 * a) + c));

	cout << "Area= " << Area;

	return 0;
}