#include <iostream>
#include <string>
#include <cmath>
using namespace std;

double Totale_time_seconds(double D, double H, double M, double S) {
	S = S;
	M = M * 60;
	H = H * 3600;
	D = D * 86400;
	return round(S + M + H + D);
}

int main() {
	double days, hours, minutes, seconds;

	cout << "enter task duration:(days),(hours),(minutes),(seconds): ";
	cin >> days >> hours >> minutes >> seconds;

	cout << "total time in seconds = " << Totale_time_seconds(days, hours, minutes, seconds);
	return 0;	
}