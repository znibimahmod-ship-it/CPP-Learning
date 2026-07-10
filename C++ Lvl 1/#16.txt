#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int A, B;
	cout << "to calculate rectamgle area through diagonal and side area of rectangle :\n";
	cout << "give a and b : ";
	cin >> A >> B;

	cout << "Area = " << A * sqrt(pow(B,2)-pow(A,2)) ;


	return 0;
}
