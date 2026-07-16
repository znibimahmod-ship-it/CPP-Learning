#include<iostream>
#include <string>
#include <cstdlib>
using namespace std;

enum enCaracter { small_letter = 1, Capital_letter = 2, Special_caracter = 3, Digit = 4 };

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

void Print_Array(int N, string arr[100]) {
	for (int i = 1; i <= N; i++) {
		cout << "Array[" << i << "]: " << arr[i] << " ";
		cout << endl;
	}
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
string word(enCaracter CharType, int lenght) {

	string Word = "";
	for (int x = 1; x <= lenght; x++) {
		Word = Word + char(Random_caracters(CharType));
	}
	return Word;
}

string GenerateKey() {
	string key = "";
	for (int x = 1; x <= 4; x++) {
		key += word(Capital_letter, 4);
		if (x <= 3) {
			key += "-";
		}
	}
	return key;
}

int main() {
	int lenght = ReadPositiveNumber("Enter number of elements: ");
	string arr1[100];
	srand((unsigned)time(NULL));

	//fill array with Random Number 
	for (int i = 1; i <= lenght; i++) {
		arr1[i] = GenerateKey();
	}

	//arr1
	cout << "Array elements: " << "\n";
	Print_Array(lenght, arr1);
	
	return 0;
}