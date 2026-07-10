#include<iostream>
using namespace std;

string ReadPassword(string message) {
	string P;

	cout << message;
	cin >> P;

	return P;
}

bool PasswordLetter(string P) {
	string word = "";
	int comp = 0;

	for (int i = 65; i <= 90; i++) {
		for (int x = 65; x <= 90; x++) {
			for (int y = 65; y <= 90; y++) {
				word += char(i);
				word += char(x);
				word += char(y);
				comp ++;
				cout << "Trial [" << comp << "]" << ": " << word << endl;
				if (P == word) {
					cout << "Password is: " << P << endl;
					cout << "Found after " << comp << " Trial(s)";
					return true;
				}
				word = "";
			}
		}
	}

	return false;
}

int main() {

	if (!PasswordLetter(ReadPassword("enter the password (Tree Capital Letter) : "))) {
		cout << "Password Incorect: ";
	}

	// fach kandiro w = char(65)+char(90) => 155 
	// but fach kandiro w = w + char(a) / w += char(b) => "AZ"
	return 0; 
}	