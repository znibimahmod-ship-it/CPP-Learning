#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float D;
	const float Pi = 3.14;
	cout << "to calculate circle area through diameter : \n";
	cout << "give D : ";
	cin >> D;

	cout << " ( before ceiling ) Area = " <<  (Pi*pow(D,2))/4 ;
	cout << " ( after ceiling ) Area = " << ceil((Pi * pow(D, 2)) / 4);

	return 0;
}
