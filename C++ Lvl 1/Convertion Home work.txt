#include <iostream>
#include<string>
using namespace std;

int main()
{
	// (1) 
	string st1 = "43.22";
	double std = stod(st1);
	float stf = stof(st1);
	int sti = stoi(st1);

	cout << std << endl;
	cout << stf << endl;
	cout << sti << endl;
	// (2) 
	int N1 = 20;

	string ntos = to_string(N1);
	cout << N1 << endl;
	// (3) 
	double N2 = 20.20;

	string dtos = to_string(N2);
	cout << N2 << endl;
	// (4)
	float N3 = 55.23;

	string ftos = to_string(N3);
	cout << N3 << endl;
	int ftoi = int(N3);
	cout << N3 << endl;
	return 0;
}
