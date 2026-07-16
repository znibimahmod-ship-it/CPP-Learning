#include<iostream>
#include<string>
using namespace std;


float ReadPositiveNumber(string message) {
	float N;
	
	do {
		cout << message;
		cin >> N;
	} while (N <= 0);
	
	return N;

};
float TotallBillAfterServices(float TB) {
	TB=TB*1.1;//10%(service fee) tb9at 3la Totalbill +
	TB = TB * 1.16;// result itb9 3lih 16% (sale tax)
	return TB;
}

int main() {
	float totalbill = ReadPositiveNumber("enter the totalbill: ");

	cout << endl;
	cout << "your Totall Bill After Services is: "<< TotallBillAfterServices(totalbill) << endl;

	return 0;
}  
