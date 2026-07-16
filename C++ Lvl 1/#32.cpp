#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double M,P;

	cout << "donner le nombre: " << endl;
	cin >> M;
	cout << "enter the power numbre: " << endl;
	cin >> P;

	cout << "reault " << M << " power " << P << " = " << round(pow(M, P));

	return 0;
}