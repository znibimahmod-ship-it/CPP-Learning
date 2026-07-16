#include<iostream>;
using namespace std;

void Read(int& N) {
	cout << "enter the number N for (1 to N): ";
	cin >> N;
}
void Print_range_from_1_to_10_with_for(int N) {

	for (int counter = N; counter >= 1; counter--) {
		cout << counter << endl;
	}
}
void Print_range_from_1_to_10_with_While(int N) {
	int counter =N;

	while (counter >= 1) {
		cout << counter << endl;
		counter--;
	}
}

void Print_range_from_1_to_10_with_do_While(int N) {
	int counter = N;
	do {
		cout << counter << endl;
		counter--;
	} while (counter >= 1);

}

int main() {
	int N;

	Read(N);

	Print_range_from_1_to_10_with_for(N);

	Print_range_from_1_to_10_with_While(N);

	Print_range_from_1_to_10_with_do_While(N);

	return 0;
}  