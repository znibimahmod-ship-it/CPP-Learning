#include<iostream>
using namespace std;

  int ReadPositiveNumber(string message) {
	  int N;
	cout << message;
	cin >> N;
	while (N < 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
  int CalculateDigitFrequency(int N, int digit) {
	  int comp = 0;
	  while (N > 0) {
		  if (N % 10 == digit) {
			  comp += 1;
		  }
		  N /= 10;
	  }
	  return comp;
  }
  void PrintAllDigitsFrequency(int N) {
	  for (int i = 0; i <= 9; i++) {
		  int DigitFrequency = CalculateDigitFrequency(N, i);
		  if (DigitFrequency > 0) {
			  cout << "Digit " << i << " Frequency is " << DigitFrequency << " Times(s)." << endl;
		  }
	  }
	  
	}
int main() {
	  int N = ReadPositiveNumber("Please enter the main number: ");
	  PrintAllDigitsFrequency(N);

	return 0;
}
/*#include<iostream>
using namespace std;

int ReadPositiveNumber(string message) {
	int N;
	cout << message;
	cin >> N;
	while (N < 0) {
		cout << "(number must be positive): ";
		cin >> N;
	}
	return N;
}
void CalculateDigitFrequency(int N) {
	int comp = 0;
	int x = N;
	for (int i = 0; i <= 9; i++) {
		comp = 0;
		N = x;
		while (N > 0) {
			if (N % 10 == i) {
				comp += 1;
			}
			N /= 10;
		}
		if (comp > 0) {
			cout << "Digit " << i << " Frequency is " << comp << " Times(s)." << endl;
		}
	}
}int main() {
	int N = ReadPositiveNumber("Please enter the main number: ");

	CalculateDigitFrequency(N);

	return 0;
}*/