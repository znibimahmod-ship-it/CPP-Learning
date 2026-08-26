#include <iostream>
using namespace std;

string ReadText() {
	string Text;

	cout << "entre the code before Encrypte: ";
	cin >> Text;

	return Text;
}
string Encrypte(string Text,int Encryptionkey) {

	for (int x = 0; x < Text.length(); x++) { 
		Text[x] = char(Text[x] + Encryptionkey);
	}
	return Text;
}

string Decrypte(string EncryptedText,int EncryptionKey) {
	for (int x = 0; x < EncryptedText.length(); x++) { 
		EncryptedText[x] = char(EncryptedText[x] - EncryptionKey);
	}
	return EncryptedText;
}

int main() {
	int Encryptionkey = 2;
	string Text = ReadText();
	string TextAfterEncrypte = Encrypte(Text,Encryptionkey);
	string TextAfterDecrypte = Decrypte(TextAfterEncrypte, Encryptionkey);

	cout << "Your code is: " << Text << endl;
	cout << "Your code after Encrypte is: " << TextAfterEncrypte << endl;
	cout << "Your code after Decrypte is: " << TextAfterDecrypte << endl;

	return 0;
}