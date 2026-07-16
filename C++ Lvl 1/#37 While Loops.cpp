#include<iostream>
using namespace std;


int main() {

	int N;
	int sum = 0;

	cout << "enter the N number (99 to calculate the sum):" << endl;//1
	cin >> N;

	while (N!=-99) {
		sum += N;
		cout << "enter the N number :" << endl;
		cin >> N;
		
	}
	cout << sum;

	return 0;
};