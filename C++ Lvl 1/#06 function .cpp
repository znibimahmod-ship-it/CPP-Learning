#include <iostream>
using namespace std;

struct stInfo {
	string firstName;
	string lastName;
	string Fullname;
};

stInfo read_first_Last_name() {
	stInfo info;
	cout << "enter firstname: " << endl;
	cin >> info.firstName;

	cout << "enter lastname: " << endl;
	cin >> info.lastName;

	return info;
};

stInfo Full_name(stInfo info, string Language) {
	if (Language == "Eng") {
		 info.Fullname = info.firstName +" " + info.lastName;
	} 
	else if (Language == "Arb") {
		info.Fullname = info.lastName +" " + info.firstName;
	}

	return info;
};

void PrintFull_name(stInfo info) {
	
	cout << info.Fullname;
};


int main() {

	PrintFull_name(Full_name(read_first_Last_name(), "Arb"));
	return 0;
}