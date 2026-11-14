#include<iostream>;
using namespace std;

void Read(int& N, int& M) {
	cout << "enter the number N and power M: ";
	cin >> N >> M;
}
int power_of_2_3_4(int N, int M) {
	int P = 1;
	if(M==0){
		return 1;
	}
	for (int i=1; i <= M; i++) {
		P *= N;
	}
	return P;
}
void Print(int P) {
	cout << "the result is: " << P;
}
int main() {
	int N, M;

	Read(N, M);
	Print(power_of_2_3_4(N, M));

	return 0;
}  