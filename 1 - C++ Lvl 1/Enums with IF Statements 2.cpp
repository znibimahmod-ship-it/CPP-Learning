#include <iostream>
using namespace std;

enum encountry {moroco=1,jordan=2,saudi_arebia=3};

int main(){
	cout << "enter the numbre to get the country: " << endl;
	cout << "(moroco-1)(jordan-2)(saudi_arebia-3)" << endl;
	int N;
	cin >> N;

	encountry country;

	country = (encountry)N;

	if (country == encountry::moroco) {
		cout << "moroco: " << endl;
	}
	else if(country == encountry::jordan) {
		cout << "jordan: " << endl;
	}
	else if (country == encountry::saudi_arebia) {
		cout << "saudi: " << endl;
	}
	else {
		cout << "numbre incorect: " << endl;
	}
	return 0;
}