#include <iostream>
#include <string>
using namespace std;

struct stInfo {
	string Name;
	int Age;
	string City;
	string Country;
	int Msalarie;
	string Gender;
	bool Married;
};

//string= getline()/(int or boll or float...)9odamha string -->kandiro 9bl: cin.ignore()
void Reade_Function(stInfo &info) {
	cout << "enter your Name: " << endl;//ignore kandiroha ba3d cin
	getline(cin, info.Name);
	cout << "enter your Age: " << endl;
	cin >> info.Age;
	cin.ignore();
	cout << "enter your City: " << endl;
	getline(cin, info.City);
	cout << "enter your Country: " << endl;	
	getline(cin, info.Country);
	cout << "enter your Monthly salarie: " << endl;
	cin >> info.Msalarie;
	cin.ignore();
	cout << "enter your Gender: " << endl;
	getline(cin, info.Gender);
	cout << "are you Married (True=1 or False=0): " << endl;
	cin >> info.Married;
	cin.ignore();
}

void Print_Function(stInfo& info) {
	cout << "**********************************" << endl;
	cout << "Name: " << info.Name << endl;
	cout << "Age: " << info.Age << endl;
	cout << "City: " << info.City << endl;
	cout << "Country: " << info.Country << endl;
	cout << "Montly Salarie: " << info.Msalarie << endl;
	cout << "Yearly Salarie: " << info.Msalarie*12 << endl;
	cout << "Gender: " << info.Gender << endl;
	cout << "Married: " << info.Married << endl;
	cout << "**********************************" << endl;
}

int main() {
	stInfo Person_1;
	Reade_Function(Person_1);
	Print_Function(Person_1);

	stInfo Person_2;
	Reade_Function(Person_2);
	Print_Function(Person_2);
	return 0;
};