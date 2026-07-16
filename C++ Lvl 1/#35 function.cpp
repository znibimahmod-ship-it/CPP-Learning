#include<iostream>;
using namespace std;
struct Devis{
	int penney;
	int nickel;
	int dime;
	int quarter;
	int dollar;
};
Devis Read() {
	Devis N;

	cout << "To calculate the Total Pennies and Total Dollar \n";
	cout << "enter (penny,nickel,dime,quarter,dollar) : ";

	cin >> N.penney >> N.nickel >> N.dime >> N.quarter >> N.dollar;

	return N;
}
int Totale_Pennie(Devis N) {

	int Totale_Pennies = N.penney * 1 + N.nickel * 5 + N.dime * 10 + N.quarter * 25 + N.dollar * 100;

	return Totale_Pennies;
}
float Totale_Dollar(float TP) {

	return (float)TP/100;
} 
void Print(int TP) {
	cout << "Totale Pennies is: " << TP;
}

int main() {
	Devis N;
	
	Print(Totale_Pennie(Read()));//pennies
	Print(Totale_Dollar(Totale_Pennie(Read())));//dollar

	return 0;
}  
	