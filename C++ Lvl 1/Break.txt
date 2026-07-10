#include<iostream>
using namespace std;


int main() {

	int x[10];

	for (int i = 0; i < 10;i++) {
		cout << "enter x[" << i << "]= " << endl;
		cin >> x[i];
	}

	for (int i = 0; i < 10; i++) {
		if (x[i]==3) {
			break;
		}
		cout << x[i] << endl;
	}

	return 0;
};