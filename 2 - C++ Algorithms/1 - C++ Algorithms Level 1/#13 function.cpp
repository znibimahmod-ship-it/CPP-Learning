#include<iostream>
using namespace std;

void Read(int& N1, int& N2, int& N3) {

	cout << "enter number N1: " << endl;
	cin >> N1;
	cout << "enter number N2: " << endl;
	cin >> N2;
	cout << "enter number N3: " << endl;
	cin >> N3;

}
int Check(int N1, int N2, int N3) {
	if (N1 >= N2 && N1 >= N3) {
		return N1;
	}
	else if (N2 >= N1 && N2 >= N3) {
		return N2;
	}
	else {
		return N3;
	}
}
void print(int Max) {
	cout << "the max number is: " << Max << endl;
}
int main() {
	int N1;
	int N2;
	int N3;

	Read(N1, N2, N3);
	print(Check(N1, N2, N3));
	return 0;

};