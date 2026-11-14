#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float L;
	const float Pi = 3.14;
	cout << "to calculate circle area along the circumference : \n";
	cout << "give L : ";
	cin >> L;

	cout << " ( before floor ) Area = " << pow(L,2)/(4*Pi) << endl;
	cout << " ( after floor ) Area = " << floor(pow(L,2)/(4* Pi));

	return 0;
}
