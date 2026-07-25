#include<iostream>
#include <string>
#include<cmath>
using namespace std;

float Get_decimal_point(float N) {
	float decimal = N - (int)N;

	return decimal;
}

int MY_Floor(float Number) {
	float decimal = Get_decimal_point(Number);
	int IntPart = (int)Number;

	if (abs(decimal) > 0) {
		if (Number > 0) {
			return Number - decimal;
		}
		else {
			return Number - decimal - 1;
		}

	}

}
int main() {
	float N;

	cout << "enter the number to get the floor value : ";
	cin >> N;

	cout << "My floor Result: " << MY_Floor(N) << endl;
	cout << "C++ floor Result: " << floor(N) << endl;

	return 0;
}
