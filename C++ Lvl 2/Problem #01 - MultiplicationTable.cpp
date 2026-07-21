#include<iostream>
using namespace std;

void PrintTableheader() {

	cout << "\n\t\t\t\tMultiplication from 1 to 10\n\n";

	for (int i = 1; i <= 10; i++) {
		cout << "\t" << i;
	}
	cout << "\n-----------------------------------------------------------------------------------";

}
void ColumnSeparator(int x) {
	if (x >= 10) {
		cout << "  |  ";
	}
	else {
		cout << "   |  ";
	}
}
void PrintMultiplicationTable() {
	cout << endl;
	for (int i = 1; i <= 10; i++) {
		cout << " " << i;
		ColumnSeparator(i);
		for (int x = 1; x <= 10; x++) {
			cout << i * x << "\t";
		}
		cout << endl;
	}
}
int main() {

	PrintTableheader();
	PrintMultiplicationTable();
	
	return 0;
}