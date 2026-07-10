#include <iostream>
using namespace std;
int main()
{
	int penny, nickel, dime, quarter, dollar;
	float Totalpennies;
	cout << "To calculate the Total Pennies and Total Dollar \n";
	cout << "enter (penny,nickel,dime,quarter,dollar) : ";
	cin >> penny >> nickel >> dime >> quarter >> dollar;

	penny =penny*1;
	nickel = 5 * nickel;
	dime = 10*dime;
	quarter = 25*quarter;
	dollar = 100*dollar;
	Totalpennies = penny + nickel + dime + quarter + dollar;

	cout << "Total Pennies= " << Totalpennies <<endl;
	cout << "Total dollar= " << Totalpennies/100 <<endl;

	return 0;
}
