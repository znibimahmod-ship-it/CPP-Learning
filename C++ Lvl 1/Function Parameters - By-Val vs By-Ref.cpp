#include <iostream>
#include <string>
using namespace std;

int Pro(int &N1) {
	 N1 = 1000;
	 return N1;
}

int main() {
	int N1=700;// hadi db atwli 1000 7it bdltha mn (hexadecimal dyalha)mn jdar(BY REFRENCE)

	cout << N1 << endl;//9bl function 
	cout << Pro(N1) << endl;//pass BY REFRENCE
	cout << N1 << endl;//after pass BY REFRENCE N1=1000 maxi 700 hit (&)jdar dyalha bdlnah b 1000
	
	return 0;
}


