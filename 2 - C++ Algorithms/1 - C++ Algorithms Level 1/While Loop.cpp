#include<iostream>
using namespace std;

int main() {
	int F;
	int T;
	int N;

	cout << "enter the number from(F) and the number To(T): ";
	cin >> F>>T;

	cout << "Now enter the number from to: " << endl;
	cin >> N;

	while (F<=N && N<=T) { // (&&) is for inside (||) is for outside
		cout << "the number is between: " << endl;
		cin >> N;
	}
	cout << "the number is not between: " << endl;

	return 0;
}

//Fonction
#include<iostream>
using namespace std;

void FRange(int F,int T) {
	int N;
	cout << "Now enter the number between " << F << " and " << T << endl;
	cin >> N;

	while (F > N || N > T) { // (&&) is for inside (||) is for outside
		cout << "!! wrong the number is not between: " << endl;
		cout << "enter the right number :" << endl;
		cin >> N;
	}
	cout << "Good the number is between: " << endl;
};
int main() {
	
	FRange(1, 10);

	return 0;
}