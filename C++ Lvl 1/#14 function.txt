#include<iostream>
using namespace std;

void Read(int& N1, int& N2) {

	cout << "enter number N1: " << endl;
	cin >> N1;
	cout << "enter number N2: " << endl;
	cin >> N2;
}
void swap(int& N1, int& N2) {
	int t;
	t = N1;
	N1 = N2;
	N2 = t;
	
}
void print(int N1, int N2) {
	cout<<"after swap N1= "<<N1<<" N2= "<<N2<<endl;
}

int main() {
	int N1;
	int N2;
	
	Read(N1, N2);
	swap(N1, N2);
	print(N1, N2);

	return 0;

};