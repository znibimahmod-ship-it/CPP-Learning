#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCaracter { small_letter, Capital_letter, Special_caracter, Digit };

int ReadPositiveNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	while (N <= 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}

int Random_caracters(enCaracter C) {
	switch (C) {
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

/*(random = From a to z ) * Number(caracter) */
string word(enCaracter CharType,int lenght) {

	string Word = "";
	for (int x = 1; x <= lenght; x++) {
		Word = Word + char(Random_caracters(CharType));
	}
	return Word;
}

void GenerateKey(int N) {
	for (int i = 1; i <= N; i++) {
		cout << "Key [" << i << "] : ";
		for (int x = 1; x <= 4; x++) {
			cout << word(Capital_letter, 4);
			if(x <= 3){
				cout << "-";
			}
		}
		cout << endl;
	}
}
int main() {
	int N = ReadPositiveNumber("how many keys do you want: ");
	srand(time(0));

	GenerateKey(N);

	return 0;
}
