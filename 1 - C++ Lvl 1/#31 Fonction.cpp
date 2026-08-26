#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Pro(int N) {
	cout << "N^2=" << round(pow(N, 2)) << endl;
	cout << "N^3=" << round(pow(N, 3)) << endl;
	cout << "N^4=" << round(pow(N, 4)) << endl;
}

int main() {
	double N;

	cout << "enter number: ";
	cin >> N;

	Pro(N);

	return 0;	
}