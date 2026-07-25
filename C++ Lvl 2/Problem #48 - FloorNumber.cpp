#include<iostream>
#include <string>
#include<cmath>
using namespace std;
// 10.7 /-10.7 / 

float Get_decimal_point(float N) {
	float decimal = N - (int)N;//10.3 - 10 =0.3   //10 -10=0

	return decimal;
}

int MY_Floor(float Number) {
	float decimal = Get_decimal_point(Number);//-0.7
	int IntPart = (int)Number;//-10.7 + 0.7 -1 = -10

	if (abs(decimal) > 0) {//0.7
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

	cout << "enter the number to get the Round value : ";
	cin >> N;

	cout << "My Round Result: " << MY_Floor(N) << endl;
	cout << "C++ Round Result: " << floor(N) << endl;

	return 0;
}
