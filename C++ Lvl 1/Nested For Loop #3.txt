#include<iostream>
using namespace std;

int main() {

	
	for (char x = 'A'; x <= 'Z'; x++) {
		cout << "Letter: " << x << endl;

		for (char i = 'A'; i <= 'Z'; i++) {
			cout << x << i;
			cout << endl;
		}
		cout << "--------------" << endl;
	}

	return 0;
}