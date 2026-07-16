#include <iostream>
using namespace std;

int main()

{
	//Output

	string Name = "Mohammed Abu-Hadhoud.";
	short int Age = 44;
	string City = "Amman.";
	string Country = "Jordan";
	short int MonthS = 5000;
	int yearlyS = MonthS * 12;
	char Gender = 'M';
	bool Married = true;

	cout << "************************************\n";
	cout << "Name :" << Name << endl;
	cout << "Age :" << Age << endl;
	cout << "City :" << City << endl;
	cout << "Country :" << Country << endl;
	cout << "Monthly salary :" << MonthS << endl;
	cout << "yearly salary :" << yearlyS << endl;
	cout << "Gender :" << Gender << endl;
	cout << "Married :" << Married << endl;
	cout << "************************************\n";

	//Input 
	string Name;
	short int Age;
	string City;
	string Country;
	int MonthS;
	int yearlyS;
	char Gender;
	bool Married;

	cout << " your name: ";
	cin >> Name;
	cout << " your age: ";
	cin >> Age;
	cout << "your city: ";
	cin >> City;
	cout << "your country: ";
	cin >> Country;
	cout << "your monthly salary: ";
	cin >> MonthS;
	cout << "your gender ('M' or 'F'):  ";
	cin >> Gender;
	cout << "your Married (1 or 0):  ";
	cin >> Married;


	cout << "************************************\n";
	cout << "Name :" << Name << endl;
	cout << "Age :" << Age << endl;
	cout << "City :" << City << endl;
	cout << "Country :" << Country << endl;
	cout << "Monthly salary :" << MonthS << endl;
	cout << "yearly salary :" << MonthS * 12 << endl;
	cout << "Gender :" << Gender << endl;
	cout << "Married :" << Married << endl;
	cout << "************************************\n";

	//calcul (input)
	int N1, N2;
	cout << "enter your first number : ";
	cin >> N1;
	cout << "enter your second number : ";
	cin >> N2;

	cout << N1 << "+" << endl;
	cout << N2 << endl;
	cout << "------------" << endl;
	cout << "Total= " << N1 + N2;


	return 0;
}