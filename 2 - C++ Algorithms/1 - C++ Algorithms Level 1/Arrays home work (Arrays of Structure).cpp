#include <iostream>
using namespace std;

struct stPersonne{
	string first_name;
	string last_name;
	int age;
	string phone;
};

void read_Person(stPersonne & Person) {
	cout << "enter your first name: " << endl;
	cin >> Person.first_name;
	cout << "enter your last name: " << endl;
	cin >> Person.last_name;
	cout << "enter your age: " << endl;
	cin >> Person.age;
	cout << "enter your phone: " << endl;
	cin >> Person.phone;
}
void Print_Person(stPersonne & Person) {
	cout << "*****************************" << endl;
	cout << "your first name: ";
	cout << Person.first_name << endl;
	cout << "your last name: " ;
	cout << Person.last_name << endl;
	cout << "your age: " ;
	cout << Person.age << endl;
	cout << "your phone: ";
	cout << Person.phone << endl;
	cout << "*****************************" << endl;
}

void read_Person_arrays(stPersonne  Person[2]) {
	read_Person(Person[0]);
	read_Person(Person[1]);
}

void Print_Person_arrays(stPersonne  Person[2]) {
	cout << Person[0].first_name << endl;
	cout << Person[0].last_name << endl;
	cout << Person[0].age << endl;
	cout << Person[0].phone << endl;

	cout << Person[1].first_name << endl;
	cout << Person[1].last_name << endl;
	cout << Person[1].age << endl;
	cout << Person[1].phone << endl;
}
int main() {
	stPersonne Person[2];

	read_Person(Person[0]);//1
	read_Person(Person[1]);//2
	

	Print_Person(Person[0]);//1
	Print_Person(Person[1]);//2

	return 0;
}
