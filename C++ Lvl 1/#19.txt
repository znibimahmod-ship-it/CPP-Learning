#include <iostream>
using namespace std;

int main() {
    double D;
    const double PI = 3.1416;

    cout << "Enter diameter (D): ";
    cin >> D;

    double area = (PI * D * D) / 4;
    cout << "Circle area = " << area << endl;

    return 0;
}