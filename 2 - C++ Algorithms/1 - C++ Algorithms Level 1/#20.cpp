#include <iostream>
using namespace std;

int main() {
    double A;
    const double PI = 3.1416;

    cout << "Enter square side (A): ";
    cin >> A;

    double area = (PI * A * A) / 4;
    cout << "Inscribed circle area = " << area << endl;

    return 0;
}