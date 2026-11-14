#include<iostream>
using namespace std;

int main() {
	
	for (int i = 1; i <= 120; i++) {// (i=1 x=1) (i=2 x=1 x=2) (i=3 x=1 x=2 x=3)....
		
		
		for (int x = 1; x <= i; x++) {
			cout << "*";
		}
		cout << endl;
	}
	

	return 0;
}