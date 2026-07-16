#include <iostream>
using namespace std;
int main()
{
	float TB,CP,Total;

	cout << "enter totalbill: ";
	cin >> TB;
	cout << "enter CashPaid: ";
	cin >> CP;

	Total = CP - TB;

	cout << "the paid back is= " << Total;

	return 0;
}