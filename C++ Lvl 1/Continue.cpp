#include<iostream>
using namespace std;

int main() {
	int x;
	int sum = 0;

	for (int i = 1; i <= 5; i++) {
		cout << "enter number " << i << endl;
		cin >> x;
		if (x > 50) {
			cout << "the number is greater than 50 will not be calculated: " << endl;
			continue;
		}
		sum += x;
	};

	cout << "the sum= " << sum << endl;

	return 0;
};