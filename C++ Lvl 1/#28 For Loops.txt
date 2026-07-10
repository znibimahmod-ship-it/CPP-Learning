#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "to calculate sum odd(fardiya) Numbres from 1 to N (enter N): " << endl;
	cin >> N;

	int sum = 0;
	
	for (int i = 1; i <= N;i+=2) {
		sum += i;
	};

	cout << "the odd sum is: " << sum << endl;

	return 0;
};