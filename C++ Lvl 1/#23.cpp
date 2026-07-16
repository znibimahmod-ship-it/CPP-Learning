#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float A, B, C, P;
	const float Pi = 3.14;
	cout << "to calculate circle area Inscribed in an Isosceles Triangle : \n";
	cout << "give A and B and C : ";
	cin >> A >> B >> C;

	P = (A + B + C)/2;
	cout << " ( before round ) Area = " << Pi * pow( (A*B*C) / ( 4 * sqrt(P*(P-A)*(P-B)*(P-C))), 2 ) << endl;
	cout << " ( after round ) Area = " << round(Pi * pow((A * B * C) / (4 * sqrt(P * (P - A) * (P - B) * (P - C))), 2));

	return 0;
}
