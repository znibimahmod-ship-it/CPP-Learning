#include <iostream>
#include <string>
using namespace std;

void My_procedure() {

	int N1;
	int N2;

	cout << "Please enter numbre 1: ";
	cin >> N1;
	cout << "Please enter numbre 2: ";
	cin >> N2;
	cout << "*********************" << endl << N1 + N2 << endl;

}

int My_function() {
	int N1;
	int N2;

	cout << "Please enter numbre 1: ";
	cin >> N1;
	cout << "Please enter numbre 2: ";
	cin >> N2;
	return N1 + N2;

}

int main() {

	My_procedure();

	cout << My_function();

	return 0;
}