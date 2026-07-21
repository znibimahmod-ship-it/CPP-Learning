#include<iostream>
using namespace std;

int ReadPositiveNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	while (N <= 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
void PrintDigitsNumber(int N) {

	while (N > 0) {
		int lastN = N % 10;
		N /= 10;
		cout << lastN << endl;
	}

}
int main() {

	PrintDigitsNumber(ReadPositiveNumber("enter the positive numbers to take the digits: "));
	

	return 0;
}





//#include<iostream>
//#include<string>
//using namespace std;
//
//int Read(string message) {
//	int N;
//
//	cout << message;
//	cin >> N;
//
//	return N;
//}
//void PrintDigits(int N) {
//
//	string strN = to_string(N);
//
//	for (int i = (strN.length()) - 1; i >= 0; i--) {
//		cout << strN[i] << endl;
//	}
//
//}
//int main() {
//
//	PrintDigits(Read("enter number to take the reverce: "));
//
//	
//	return 0;
//}