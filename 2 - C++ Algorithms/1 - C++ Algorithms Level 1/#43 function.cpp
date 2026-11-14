#include <iostream>
using namespace std;

struct sttaskduration{
	float NumberOfDays;
	float NumberOfHours;
	float NumberOfMinutes;
	float NumberOfSeconds;
};
struct secondsPerX {
	const int SencondPerDay = 60 * 60 * 24;
	const int SencondPerHour = 60 * 60;
	const int SencondPerMinute = 60;
};
int ReadNumbreOfSeconds() {
	int seconds;

	cout << "enter task duration in (seconds): ";
	cin >> seconds;

	return seconds;
}
sttaskduration Seconds_To_Taskduration(int Seconds) {
	sttaskduration X;
	secondsPerX P;
	int Remaider = 0;

	X.NumberOfDays = Seconds / P.SencondPerDay;
	Remaider = Seconds % P.SencondPerDay;

	X.NumberOfHours = Remaider / P.SencondPerHour;
	Remaider = Remaider % P.SencondPerHour;

	X.NumberOfMinutes = Remaider / P.SencondPerMinute;
	Remaider = Remaider % P.SencondPerMinute;

	X.NumberOfSeconds = Remaider;

	return X;
}
void Print(sttaskduration X) {
	cout << X.NumberOfDays << ":" << X.NumberOfHours << ":" << X.NumberOfMinutes << ":" << X.NumberOfSeconds;
}
int main() {

	Print(Seconds_To_Taskduration(ReadNumbreOfSeconds()));

	return 0;
}