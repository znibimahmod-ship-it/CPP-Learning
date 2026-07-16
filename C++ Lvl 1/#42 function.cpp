#include <iostream>
using namespace std;

struct stHour{
	float days;
	float hours;
	float minutes;
	float seconds;
};
stHour ReadNumbreOfHours() {
	stHour X;

	cout << "enter task duration:(days),(hours),(minutes),(seconds): ";
	cin >> X.days >> X.hours >> X.minutes >> X.seconds;

	return X;
}
float Totale_Time_Seconds(stHour X) {
	X.seconds = X.seconds;
	X.minutes = X.minutes * 60;
	X.hours = X.hours * 3600;
	X.days = X.days * 86400;

	float Totale = X.seconds + X.minutes + X.hours + X.days;

	return Totale;
}

void Print(float Totale) {
	cout << "total time in seconds = " << Totale;
}
int main() {

	Print(Totale_Time_Seconds(ReadNumbreOfHours()));

	return 0;
}