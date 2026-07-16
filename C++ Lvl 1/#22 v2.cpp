#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float A,B;
	const float Pi = 3.14;
	cout << "to calculate circle area Inscribed in an Isosceles Triangle : \n";
	cout << "give A and B : ";
	cin >> A >> B;

	cout << " ( before floor ) Area = " << Pi *(pow(B,2)/4)*(( 2*A-B )/( 2*A+B )) << endl;
	cout << " ( after floor ) Area = " << floor(Pi * (pow(B, 2) / 4) * ((2 * A - B) / (2 * A + B)));

	return 0;
}
