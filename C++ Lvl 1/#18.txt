#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	const float Pi=3.14 ;
	float r ;
	cout << " to calculat circle area \n";
	cout << "give r : ";
	cin >> r;

	cout << " (before celeing)  Area = " << Pi * pow(r, 2) << endl;
	cout << " (after celeing)  Area = " << ceil(Pi * pow(r,2)) ;


	return 0;
}
