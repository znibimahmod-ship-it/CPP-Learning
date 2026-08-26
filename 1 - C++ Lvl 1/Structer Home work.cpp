#include <iostream>
using namespace std;

struct Salarie {
	int junior;
	int sinyor;
};

struct Info {
	string Name;
	int Age;
	string City;
	string Country;
	Salarie Salarie;
	string Gender;
	bool Married;
};

int main()
{
	Info Per_1;
	Per_1.Name = "Abu-hadhud";
	Per_1.Age = 44;
	Per_1.City = "Amman";
	Per_1.Country = "Jordan";
	Per_1.Salarie.sinyor = 10000;
	Per_1.Salarie.junior = 5000;
	Per_1.Gender = "Male";
	Per_1.Married = true;

	cout << "***************************" << endl;
	cout << "Name: " << Per_1.Name << endl;
	cout << "Age: " << Per_1.Age << endl;
	cout << "City: " << Per_1.City << endl;
	cout << "Country: " << Per_1.Country << endl;
	cout << "Monthly Salary: " << Per_1.Salarie.junior << endl;
	cout << "Yearly Salary: " << (Per_1.Salarie.junior)*12 << endl;
	cout << "Gender: " << Per_1.Gender << endl;
	cout << "Married: " << (Per_1.Married ? "Yes" : "No") << endl;
	cout << "***************************";
	return 0;
}
