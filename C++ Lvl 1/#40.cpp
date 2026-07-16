#include <iostream>
using namespace std;
int main()
{
	float totalbill,BillValue, service, taxe;
	cout << "enter the billvalue befor the (service and taxe): ";
	cin >> BillValue;

	service = BillValue * 0.10;
	taxe = BillValue * 0.16;
	totalbill = BillValue + service + taxe;

	cout << "the totalbill is = " << totalbill;

	return 0;
}
