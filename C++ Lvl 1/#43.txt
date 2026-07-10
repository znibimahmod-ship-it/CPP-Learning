#include <iostream>
using namespace std;
int main()
{
	double days, hours, minutes, seconds, rest;

	cout << "enter number of (seconds): ";
	cin >> seconds;

	days = seconds / 86400;
	rest = seconds % 86400;

	hours = rest / 3600;
	rest = rest % 3600;

	minutes = rest / 60;
	rest = rest % 60;
	
	cout << days << ":" << hours << ":" << minutes << ":" << rest;
	return 0;
}
