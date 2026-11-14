#include<iostream>
using namespace std;
int MySum(int a, int b)
{
	int s = 0;
	s = a + b;
	return s;
}
int main()
{
	//Quick watch => shift F9
	// DEBUGGING SHORTCUTS (Visual Studio)

	// F5             -> Start / Continue Debugging
	// F9             -> Add / Remove Breakpoint
	
	// F10            -> Step Over (without entering the Function)
	// F11            -> Step Into (Enter Function)
	
	// Shift + F11    -> Step Out (Exit Function)
	// Shift + F5     -> Stop Debugging

	int arr1[5] = { 200,100,50,25,30 };
	int a, b, c;
	a = 10;
	b = 20;
	a++;
	++b;
	c = a + b;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	for (int i = 1; i <= 5; i++) //<- (Loop) put the break point here
	{
		cout << i << endl;
		a = a + a * i;
	}
	c = MySum(a, b); //<- (function) put the break point here
	cout << c;
	return 0;
}
