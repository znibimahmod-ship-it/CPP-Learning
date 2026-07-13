#include <iostream>
using namespace std;

float read_Num() {
	float N;
	cout << "enter The number: " << endl;
	cin >> N;

	
	return N;
};

float Operation(float N) {
	float Half;
	Half = N / 2;

	return Half;
};

void Print(float HALF) {
	cout << "the half of the number is: " << HALF;
};


int main() {
	
	Print(Operation(read_Num()));

	return 0;
}