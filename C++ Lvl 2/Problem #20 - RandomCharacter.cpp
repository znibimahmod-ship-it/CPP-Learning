#include <iostream> // Include iostream for input/output operations.
#include<cstdlib>// Include cstdlib for rand() and srand() functions.
using namespace std;

enum enSl_Cl_Sc_D { small_letter = 1, Capital_letter = 2, Special_caracter = 3, Digit = 4 };

char Random(enSl_Cl_Sc_D x) {

	switch (x) {
	case(small_letter):
		return rand() % (122 - 97 + 1) + 97;
		break;

	case(Capital_letter):
		return rand() % (90 - 65 + 1) + 65;
		break;

	case(Special_caracter):
		return rand() % (47 - 33 + 1) + 33;
		break;

	case(Digit):
		return rand() % (57 - 48 + 1) + 48;
		break;

	}
}

int main() {
	srand(time(NULL));

	cout << Random(small_letter) << endl;
	cout << Random(Capital_letter) << endl;
	cout << Random(Special_caracter) << endl;
	cout << Random(Digit) << endl;

	return 0;
}
