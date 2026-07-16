#include <iostream>
using namespace std;

int main() {
    double a, h;
    cout << "Enter base (a) and height (h): ";
    cin >> a >> h;

    double area = (a * h) / 2;
    cout << "Triangle area = " << area << endl;

    return 0;
}