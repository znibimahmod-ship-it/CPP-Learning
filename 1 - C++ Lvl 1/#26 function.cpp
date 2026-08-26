#include<iostream>;
using namespace std;

void Read(int& N) {
	cout << "enter the number N for (1 to N): ";
	cin >> N;
}
void Print_range_from_1_to_10_with_for(int N) {

	for (int counter = 1; counter <= N; counter++) {
		cout << counter << endl;
	}
}
void Print_range_from_1_to_10_with_While(int N) {
	int counter =1;
	while (counter <= N) {
		cout << counter << endl;
		counter++;
	}
}

void Print_range_from_1_to_10_with_do_While(int N) {
	int counter = 1;
	do {
		cout << counter << endl;
		counter++;
	} while (counter <= N);

}

int main() {
	int N;

	Read(N);

	Print_range_from_1_to_10_with_for(N);

	Print_range_from_1_to_10_with_While(N);

	Print_range_from_1_to_10_with_do_While(N);

	return 0;
}  