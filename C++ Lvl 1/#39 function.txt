#include<iostream>
#include<string>
using namespace std;


float Read(string message) {
	float N;

	cout << message;
	cin >> N;

	return N;
}
float calculateRemainder(float TB, float CB) {
	return TB - CB;
}

int main() {
	float totalbill = Read("enter the totalbill: ");
	float CashPaid = Read("enter the CashPaid: ");

	cout << endl;
	cout << "Your totalbill is: " << totalbill << endl;
	cout << "Your CashPaid is: " << CashPaid << endl;
	cout << "***********************" << endl;
	cout << "your remainder is: "<< calculateRemainder(totalbill, CashPaid) << endl;

	return 0;
}  
