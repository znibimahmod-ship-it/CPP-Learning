#include <iostream>
using namespace std;

struct stInfo {
	int A;
	bool L;
};

stInfo read_Age_License() {
	stInfo info;
	
	cout << "enter your Age: " << endl;
	cin >> info.A;

	cout << "Do you have a driving license:(1=True,0=False) " << endl;
	cin >> info.L;

	return info;

}

bool IsAccepted(stInfo info) {
	if (info.A > 21 && info.L == 1) {
		return true;
	}
	else {
		return false;
	}
}

void Print(bool X) {
	if (X == true) {
		cout << "Hired";
	}
	else {
		cout << "Rejected";
	}
}

int main() {

	Print(IsAccepted(read_Age_License()));
	return 0;
}


#include <iostream>
//using namespace std;
//
//struct stInfo {
//	int A;
//	bool L;
//};
//
//stInfo read_Age_License() {
//	stInfo info;
//	
//	cout << "enter your Age: " << endl;
//	cin >> info.A;
//
//	cout << "Do you have a driving license:(1=True,0=False) " << endl;
//	cin >> info.L;
//
//	return info;
//
//}
//
//bool IsAccepted(stInfo info) {
//	if (info.A > 21 && info.L == 1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//void Print(stInfo info) {
//	if (IsAccepted(info) == true) {
//		cout << "Hired";
//	}
//	else {
//		cout << "Rejected";
//	}
//}
//
//int main() {
//
//	Print(read_Age_License());
//	return 0;
//}