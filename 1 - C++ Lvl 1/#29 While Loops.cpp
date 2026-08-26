#include<iostream>
using namespace std;

int main() {
	int N;
	int i = 1;
	int sum = 0;

	cout << "enter the N number (sum odd numbers): " << endl;
	cin >> N;

	while (i<=N) {
		if (i%2==0) {
			sum += i;
		}
		i++;
	}
	cout << "The sum of add numbers: " << sum;

	return 0;
}