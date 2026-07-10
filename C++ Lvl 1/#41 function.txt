#include <iostream>
using namespace std;

struct stHour{
	float week;
	float day;
};
float ReadNumbreOfHours() {
	float H;
	cout << "enter number of hours: ";
	cin >> H;

	return H;
}
stHour HoursToDayOrWeek(float H) {
	stHour X;
	X.day = H / 24;
	X.week= H / 168;

	return X;
}

void Print(stHour X) {
	cout << X.week << " Weeks" << endl;
	cout << X.day << " Days" << endl;
}
int main() {

	Print(HoursToDayOrWeek(ReadNumbreOfHours()));
	return 0;
}