#include<iostream>
using namespace std;

string Read() {
	string name;
	cout << "enter the name: " << endl;
	cin >> name;
	return name;
}
void Name(string name) {
	cout << "your name is: " << name;
}
int main() {

	Name(Read());

	return 0;
}
