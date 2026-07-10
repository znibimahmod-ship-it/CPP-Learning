#include<iostream>;
using namespace std;

void Read(int& N) {
	cout << "enter the number N : ";
	cin >> N;
}
void power_of_2_3_4(int N) {
	int X = N * N;
	int Y = N * N * N;
	int Z = N * N * N * N;

	cout << "^2=" << X << " " << "^3=" << Y << " " << "^4=" << Z << " ";
}

int main() {
	int N;

	Read(N);
	power_of_2_3_4(N);

	return 0;
}  