#include <iostream> // Include iostream for input/output operations.
#include<cstdlib>// Include cstdlib for rand() and srand() functions.
using namespace std;

int RandNumFromTO(int From,int TO) {

	int RanNum = rand() % (TO - From + 1) + From;

	return RanNum;
}
int main() {
	srand(time(NULL));//we chande seed by the time from 1970 to the present time (auto) 
	cout << RandNumFromTO(5, 10);

	return 0;
}
