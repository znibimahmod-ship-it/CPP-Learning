#include<iostream>
using namespace std;

void Read(int& N1, int& N2,int& N3) {

	cout << "enter number 1: " << endl;
	cin >> N1;

	cout << "enter number 2: " << endl;
	cin >> N2;

	cout << "enter number 3: " << endl;
	cin >> N3;
}

int sum(int N1, int N2, int N3) {
	return N1 + N2 + N3;
}

void Print(int sum) {
	cout << "totale is: " << sum;
}

int main() {

	int N1, N2, N3;

	Read(N1, N2, N3);
	Print(sum(N1, N2, N3));

	return 0;
};