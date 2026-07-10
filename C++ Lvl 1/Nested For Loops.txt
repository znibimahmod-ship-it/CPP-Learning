#include<iostream>
using namespace std;

int main() {
	
	for (int i = 1;i<=10;i++) {  // i
		cout << "i= " << i << endl;
		int x = i;

		for (int y = 1; y <= 10; y++) { // y
			cout << x << "*" << y << " = " << x * y << endl;
		}
		cout << "-----------" << endl;
	}

	return 0;
}