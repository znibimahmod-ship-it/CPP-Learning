#include<iostream>
using namespace std;

int main() {
	int N;
	int P;
	int i = 1;
	int res = 1;

	cout << "enter the N number :" << endl;//2
	cin >> N;
	cout << "enter the P power number :" << endl;//3
	cin >> P;

	while (i<=P) {
		res *= N;
		i++;
	}
	cout << "the result is: " << res;

	return 0;
};