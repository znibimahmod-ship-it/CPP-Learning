#include <iostream>
using namespace std;

int main() {
    double mark1, mark2, mark3;
    cout << "Enter mark1: ";
    cin >> mark1;
    cout << "Enter mark2: ";
    cin >> mark2;
    cout << "Enter mark3: ";
    cin >> mark3;

    double average = (mark1 + mark2 + mark3) / 3;
    cout << "The average is: " << average << endl;

    return 0;
}