#include <iostream>
#include<string>
using namespace std;

int main()
{
	string str_1;//Mahmoud zenibi
	cout << "please enter string 1: " << endl;//14
	getline(cin, str_1);
	
	string str_2;//5
	cout << "please enter string 2: " << endl;
	cin >> str_2;

	string str_3;//10
	cout << "please enter string 3: " << endl;
	cin >> str_3;

	cout << "*************************" << endl;
	cout << str_1.length() << endl;
	cout << "Characters at 0 2 4 7 are: " << str_1[0] << str_1[2] << str_1[4] << str_1[7] << endl;// M , h , o , null
	string str = str_2 + str_3;//510
	cout << str << endl;
	int stri = stoi(str_2) * stoi(str_3);//50
	cout << stri;

	return 0;
}