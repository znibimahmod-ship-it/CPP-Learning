#include<iostream>
using namespace std

enum enOddEven { Odd = 1, Even = 2 };

void Read(int& N) {
	cout << "enter the number N for (1 to N): ";
	cin >> N;
}
enOddEven Chek(int X) {
	if (X % 2 == 0) {
		return enOddEven::Even;
	}
	else {
		return enOddEven::Odd;
	}
}
int Sum_Odd_Numbers_with_for(int N) {
	int sum = 0;

	for (int counter = 1; counter <= N; counter++) {
		if (Chek(counter) == Odd) {
			sum += counter;
		}
	}
	return sum;
}

int Sum_Odd_Numbers_with_While(int N) {
	int sum = 0;

	int counter = 1;
	while (counter <= N) {
		if (Chek(counter) == Odd) {
			sum += counter;
		}
		counter++;
	}
	return sum;
}

int Sum_Odd_Numbers_with_do_While(int N) {
	int sum = 0;
	int counter = 1;
	do {
		if (Chek(counter) == Odd) {
			sum += counter;
		}
		counter++;
	} while (counter <= N);
	return sum;
}

void Print(int sum) {
	cout << "totale is: " << sum;
}

int main() {
	int N;

	Read(N);

	Print(Sum_Odd_Numbers_with_for(N));
	
	Print(Sum_Odd_Numbers_with_While(N));

	Print(Sum_Odd_Numbers_with_do_While(N));

	return 0;
}  