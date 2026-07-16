#include<iostream>
using namespace std;

void PrintFromAAAtoZZZ() {

	for (int i = 65; i <= 90; i++) {
		for (int x = 65; x <= 90; x++) {
			for (int y = 65; y <= 90; y++) {
				cout << char(i) << char(x) << char(y) << endl;
			}
		}
	}

}

int main() {

	PrintFromAAAtoZZZ();
	
	return 0; 
}	