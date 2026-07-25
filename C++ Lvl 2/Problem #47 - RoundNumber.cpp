#include<iostream>
#include <string>
#include<cmath>
using namespace std;

float Get_decimal_point(float N) {
	float decimal = N - (int)N;

	return decimal;
}

int MY_ROUND(float Number) {
	float decimal = Get_decimal_point(Number);
	int IntPart = (int)Number;

	if (abs(decimal) >= .5) {
		if (Number > 0) {
			return ++IntPart;
		}
		else {
			return --IntPart;
		}
	}
	else {
		return IntPart;
	}

}
int main() {
	float N;

	cout << "enter the number to get the Round value : ";
	cin >> N;

	cout << "My Round Result: " << MY_ROUND(N) << endl;
	cout << "C++ Round Result: " << round(N) << endl;

	return 0;
}
