#include<iostream>
#include<string>
using namespace std;

int Read() {
	int N;
	cout << "enter the first number (-99 to calculate the sum):" << endl;
	cin >> N;

	return N;
}

int sum_Numbers(int N) {
	int sum = 0;
	int comp = 2;
	while (N != -99) {
		sum += N;
		cout << "enter the number " + to_string(comp) << endl;
		cin >> N;
		comp++;
	}
	return sum;
}
void Print(int sum) {
	cout << "the result is: " << sum;
}
int main() {

	Print(sum_Numbers(Read()));

	return 0;
}  
