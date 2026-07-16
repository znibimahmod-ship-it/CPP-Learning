#include<iostream>
using namespace std;

void read(int& lenght, int Arr_1[100]) {
	cout << "enter lenght of arrays: " << endl;
	cin >> lenght;

	for (int i = 1; i <= lenght; i++) {
		cout << "enter number " << i << endl;
		cin >> Arr_1[i];
	}
}
void print(int& lenght, int Arr_1[100]) {
	for (int i = 1; i <= lenght ; i++) {
		cout << "[" << i << "] = " << Arr_1[i] << endl;
	}
}
int Sum(int& lenght,int Arr_1[100]) {
	int sum;
	sum = 0;
	for (int i = 1; i <= lenght ; i++) {
		sum += Arr_1[i];
	}
	return sum;
}
int Avg(int& lenght, int Arr_1[100]) {
	int avg;
	avg = Sum(lenght, Arr_1)/lenght;
	return (float)avg;
}

int main() {	
	int lenght;
	int Arr_1[100];

	read(lenght, Arr_1);
	print(lenght, Arr_1);

	cout <<"Sum= " << Sum(lenght, Arr_1) << endl;
	cout << "Average= " << Avg(lenght, Arr_1) << endl;

	return 0;
}