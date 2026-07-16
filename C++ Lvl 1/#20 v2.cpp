#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float A;
	const float Pi = 3.14;
	cout << "to calculate circle area inscribed in a square : \n";
	cout << "give A : ";
	cin >> A;

	cout << " ( before ceiling ) Area = " << Pi * (pow(A / 2, 2)) << endl;
	cout << " ( after ceiling ) Area = " << ceil(Pi * (pow(A / 2, 2)));

	return 0;
}
