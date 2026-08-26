#include <iostream>
using namespace std;

struct stPersonne {
	string first_name;
	string last_name;
	int age;
	string phone;
};

void read_Person(stPersonne& Person) {
	cout << "enter your first name: " << endl;
	cin >> Person.first_name;
	cout << "enter your last name: " << endl;
	cin >> Person.last_name;
	cout << "enter your age: " << endl;
	cin >> Person.age;
	cout << "enter your phone: " << endl;
	cin >> Person.phone;
}
void Print_Person(stPersonne& Person) {
	cout << "*****************************" << endl;
	cout << "your first name: ";
	cout << Person.first_name << endl;
	cout << "your last name: ";
	cout << Person.last_name << endl;
	cout << "your age: ";
	cout << Person.age << endl;
	cout << "your phone: ";
	cout << Person.phone << endl;
	cout << "*****************************" << endl;
}

void read_Person_arrays(stPersonne Person[100],int &N) {	
	cout << "enter N number of Persons: " << endl;
	cin >> N;

	for (int i = 1; i <= N;i++) {
		cout << "enter number " << i << endl;
		read_Person(Person[i]);
	}
	
}

void Print_Person_arrays(stPersonne Person[100],int& N) {

	for (int i = 1; i <= N; i++) {
		cout << Person[i].first_name << endl;
		cout << Person[i].age << endl;
		cout << Person[i].last_name << endl;
		cout << Person[i].phone << endl;
	}
}
int main() {
	int N;
	stPersonne Person[100];

	//read_Person(Person[0]);//1
	//read_Person(Person[1]);//2


	//Print_Person(Person[0]);//1
	//Print_Person(Person[1]);//2


	read_Person_arrays(Person,N);
	Print_Person_arrays(Person, N);
	return 0;
}
