#include<iostream>;
using namespace std;

int Read() {
	int Total_sales;

	cout << "enter totale sales: " << endl;
	cin >> Total_sales;

	return Total_sales;
}
float percentage(float Total_sales) {
	if (Total_sales > 1000000) {
		return 0.01;
	}
	else if (Total_sales >= 500000 && Total_sales <= 1000000) {
		return 0.02;
	}
	else if (Total_sales >= 100000 && Total_sales <= 500000) {
		return 0.03;
	}
	else if (Total_sales >= 50000 && Total_sales <= 100000) {
		return 0.05;
	}
}
float Calculate_totale(float Total_sales) {
	return percentage(Total_sales) * Total_sales;
}

int main() {
	int Totale_sales = Read();
	cout << "percentage is: " << percentage(Totale_sales) << endl;
	cout<<"Comission is: "<<Calculate_totale(Totale_sales);

	return 0;
}  