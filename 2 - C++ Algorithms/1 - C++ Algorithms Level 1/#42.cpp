#include <iostream>
using namespace std;
int main()
{
	float days, hours, minutes, seconds;

	cout << "enter task duration:(seconds),(minutes),(hours),(days): ";
	cin >> seconds >> minutes >> hours >> days;
	
	seconds = seconds ;
	minutes = minutes * 60;
	hours = hours * 3600;
	days = days * 86400;

	cout << "total time in seconds = " << seconds + minutes + hours + days;

	return 0;
}
