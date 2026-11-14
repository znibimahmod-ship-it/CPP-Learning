#include<iostream>
#include <string>
#include<cmath>
using namespace std;

//int MY_sqrt(float Number) {
//	for (int i = 0; i <= Number / 2; i++) {
//		if (i * i == Number) {
//			return i;
//		}
//	}
//}
float MY_sqrt(float Number) {// 25^0.5 = 5  &&  5^2 = 25

	return pow(Number, 0.5);

}
int main() {
	float N;

	cout << "enter the number to get the sqrt value : ";
	cin >> N;

	cout << "My sqrt Result: " << MY_sqrt(N) << endl;
	cout << "C++ sqrt Result: " << sqrt(N) << endl;

	return 0;
}