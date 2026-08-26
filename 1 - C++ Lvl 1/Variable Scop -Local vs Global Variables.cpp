#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int	x = 11;

void F() {
	int x;
	x = 500;
	cout << x << endl;
}
int main() {
  
	int x = 10;
	
	cout << "local x in the main is: " << x << endl;
	cout << "local x in the fonction is: ";
	F();
	
	::x += 5;
	cout << "global x is: " << ::x;

	cout << Foncton(x) + ::x - x;

	return 0;	
}
