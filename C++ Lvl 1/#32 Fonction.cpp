#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void Pro(double M,double P) {
	cout << "reault " << M << " power " << P << " = " << round(pow(M, P));
}

int main() {
	double M, P;

	cout << "donner le nombre: " << endl;
	cin >> M;
	cout << "enter the power numbre: " << endl;
	cin >> P;

	Pro(M,P);
	return 0;	
}

