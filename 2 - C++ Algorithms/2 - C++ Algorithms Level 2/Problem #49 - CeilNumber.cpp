#include<iostream>
#include <string>
#include<cmath>
using namespace std;

float Get_decimal_point(float N) {
	float decimal = N - (int)N;

	return decimal;
}

int MY_ceil(float Number) {
	float decimal = Get_decimal_point(Number);
	int IntPart = (int)Number;

	if (abs(decimal) > 0) {
		if (Number > 0) {
			return Number - decimal + 1;
		}
		else {
			return Number - decimal;
		}
	}
}
int main() {
	float N;

	cout << "enter the number to get the ceil value : ";
	cin >> N;

	cout << "My ceil Result: " << MY_ceil(N) << endl;
	cout << "C++ ceil Result: " << ceil(N) << endl;

	return 0;
}