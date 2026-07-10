#include <iostream>
using namespace std;

int main() {

	int Total_sales;

	cout << "enter totale sales: " << endl;
	cin >> Total_sales;

	if (Total_sales>1000000) {
		cout << "your percentage is 1%: " << Total_sales * 1 /100;
	}
	else if (Total_sales>=500000 && Total_sales<=1000000) {
		cout << "your percentage is 2%: " << Total_sales * 2 / 100;
	}
	else if (Total_sales >= 100000 && Total_sales <= 500000) {
		cout << "your percentage is 3%: " << Total_sales * 3 / 100;
	}
	else if (Total_sales >= 50000 && Total_sales <= 100000) {
		cout << "your percentage is 5%: " << Total_sales * 5 / 100;
	}
	else {
		cout << "you have 0% percentage: ";
	}
	return 0;
}