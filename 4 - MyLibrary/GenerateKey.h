#pragma once
#include<iostream>
#include<string>
#include <cstdlib>

using namespace std;

enum enCaracter {
	small_letter,
	Capital_letter,
	Special_caracter,
	Digit
};

namespace GenerateKey {

	int Random_caracters(enCaracter TypeCaracter) {
		switch (TypeCaracter) {
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

	string word(enCaracter TypeCaracter, int NumCaracter) {

		string Word = "";

		for (int i = 1; i <= NumCaracter; i++) {
			Word += char(Random_caracters(TypeCaracter));
		}

		return Word;
	}

	///*GenerateKey*/
	void GenerateKey(int NumKeys, int NumCaracter, int NumWord, enCaracter TypeCaracter) {

		for (int i = 1; i <= NumKeys; i++) {
			cout << "Key [" << i << "] : ";
			for (int x = 1; x <= NumWord; x++) {
				cout << word(TypeCaracter, NumCaracter);
				if (x <= 3) {
					cout << "-";
				}
			}
			cout << endl;
		}
	}
}