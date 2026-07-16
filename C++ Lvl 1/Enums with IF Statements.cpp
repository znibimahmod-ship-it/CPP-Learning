#include <iostream>
using namespace std;

enum encolor {red=1,blue=2,green=3,yellow=4};// !! start with (0)
int main() {

	cout << "enter your choice: (1-red)(2-blue)(3-green)(4-yellow)" << endl;

	int c;

	enum encolor color;

	cin >> c;

	color = (encolor)c;
	
	if (color == encolor::red) {//to more clearly reading don't use(color==1)
		system("color 4F");
	}
	else if (color==encolor::blue) {
		system("color 1F");
	}
	else if (color == encolor::green) {
		system("color 2F");
	}
	else if (color == encolor::yellow) {
		system("color 6F");
	}
	else {
		cout << "numbre incorect: " << endl;
	}

	return 0;
}