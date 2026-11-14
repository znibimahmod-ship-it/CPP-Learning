#include <iostream>
using namespace std;

enum best_color{red,black,blue,orange};
enum gendeor{male,female};
enum Married_state{Married,single};

int main()
{
	string Name = "John Doe";
	int Age = 25;
	string City = "New York";
	string Country = "USA";
	double MonthlySalary = 3000;
	double YearlySalary = MonthlySalary * 12;

	best_color Mycolor;
	gendeor Mygender;
	Married_state Mystate;

	Mycolor = best_color::red;
	Mygender = gendeor::male;
	Mystate = Married_state::Married;

	cout << "***************************" << endl;
	cout << "Name: " <<Name << endl;
	cout << "Age: " << Age << endl;
	cout << "City: " << City << endl;
	cout << "Country: " << Country<< endl; 
	cout << "Monthly Salary: " << MonthlySalary << endl;
	cout << "Yearly Salary: " << YearlySalary << endl;
	cout << "My best color: " << Mycolor << endl;
	cout << "Gender: " << Mygender << endl;
	cout << "Married: " << Mystate<< endl;
	cout << "***************************";
	return 0;
}
