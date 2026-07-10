#include <iostream>
using namespace std;

enum enColor {red,blue,yelow,white,black};
enum enGendor {male,female};
enum enMaritalstate {married,single};

struct stAdress {
	string Streetname;
	string Codepostal;
};
struct stContact {
	string Phone;
	string Email;
};
struct stPerson {
	string Firstname;
	string Lastname;
	stAdress Adress;
	stContact Contact;
	enColor Color;
	enGendor Gendor;
	enMaritalstate Maritastate;
};
int main()
{
	stPerson Person_1;
	Person_1.Firstname = "Mahmoud";
	Person_1.Lastname = "Zenibi";
	Person_1.Adress.Codepostal = "102030";
	Person_1.Adress.Streetname = "Safa";
	Person_1.Contact.Email = "znibimahmod@gmail.com";
	Person_1.Contact.Phone = "0777262473";
	
	Person_1.Color = enColor::white;
	Person_1.Gendor = enGendor::male;
	Person_1.Maritastate = enMaritalstate::married;

	cout << Person_1.Firstname << endl;
	cout << Person_1.Lastname << endl;
	cout << Person_1.Adress.Codepostal << endl;
	cout << Person_1.Adress.Streetname << endl;
	cout << Person_1.Contact.Email << endl;
	cout << Person_1.Contact.Phone << endl;
	cout << Person_1.Color << endl;
	cout << Person_1.Gendor << endl;
	cout << Person_1.Maritastate << endl;
	return 0;
}
