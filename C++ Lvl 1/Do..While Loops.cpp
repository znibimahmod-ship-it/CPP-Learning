#include<iostream>
using namespace std;

void Bet(int From,int To) {
	int x;
	
	do {
		cout << "enter the number Between " << From << " and " << To << endl;
		cin >> x;

	} while (x < From || x > To);

	cout << "good: ";
}

int main() {

	Bet(1,10);

	return 0;
};