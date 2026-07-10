#include<iostream>
using namespace std;

void input(int& L, int& M){
	do {
		cout << "enter loanAmount: " << endl;
		cin >> L;
	} while (L <= 0);
	do {
		cout << "enter your mountly Payment: " << endl;
		cin >> M;
	} while (M <= 0);

}
int Calcule(int& LoanAmount, int& MounthPay) {
	int totale = LoanAmount / MounthPay;

	return totale;

}
void Print(int TotalePayPerMounth) {
	cout << "you have to pay " << TotalePayPerMounth << " mounth";
}

int main() {
	int L, M;
	input(L, M);
	Print(Calcule(L,M));

	return 0;
}