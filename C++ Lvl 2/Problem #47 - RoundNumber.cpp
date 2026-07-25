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

	if (Number > 0) {
		if (decimal >= 0.5) {
			return Number - decimal + 1;
		}
		else if (decimal < 0.5) {
			return Number - decimal;
		}
	}
	else if (Number < 0) {
		if (decimal <= -0.5) {
			return Number - decimal - 1;
		}
		else if (decimal > -0.5) {
			return Number - decimal;
		}
	}
	return Number;
}
int main() {
	float N;

	cout << "enter the number to get the Round value : ";
	cin >> N;

	cout << "My Round Result: " << MY_ROUND(N) << endl;
	cout << "C++ Round Result: " << round(N) << endl;

	return 0;
}
