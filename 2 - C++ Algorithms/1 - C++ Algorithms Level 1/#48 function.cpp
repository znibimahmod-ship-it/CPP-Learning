#include<iostream>
using namespace std;

void input(int& L, int& M){
	do {
		cout << "enter loanAmount: " << endl;
		cin >> L;
	} while (L <= 0);
	do {
		cout << "how much mounth you want to pay: " << endl;
		cin >> M;
	} while (M <= 0);

}
int Calcule(int& LoanAmount, int& HowManyMounth) {
	int totale = LoanAmount / HowManyMounth;

	return totale;

}
void Print(int TotalePayPerMounth) {
	cout << "your Totale Payment Per Mounth is: " << TotalePayPerMounth;
}

int main() {
	int L, M;
	input(L, M);
	Print(Calcule(L,M));

	return 0;
}