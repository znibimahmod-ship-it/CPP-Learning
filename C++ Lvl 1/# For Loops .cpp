#include<iostream>
using namespace std;

int main() {

	int N;
	cout << "to calculate sum Numbres from 1 to N (enter N): " << endl;
	cin >> N;

	int sum = 0;
	for (int i = 1; i <= N;i++) {
		sum += i;
	}
	cout << "the sum is: " << sum << endl;
	
	return 0;
};