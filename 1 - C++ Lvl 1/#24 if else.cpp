#include <iostream>
using namespace std;

int main() {


	int Age;

	cout << "enter your age: " << endl;
	cin >> Age;


	if (Age>=18 and Age<=45) {
		cout << "Valide age " << endl;
	}
	else {
		cout << "Invalide age" << endl;
	}
	return 0;
}