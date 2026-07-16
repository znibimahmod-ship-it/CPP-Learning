#include <iostream>
using namespace std;

int main() {
    int number1, number2, temp;

    cout << "Enter number1: ";
    cin >> number1;
    cout << "Enter number2: ";
    cin >> number2;

    cout << "\nBefore swapping:\n";
    cout << "Number1 = " << number1 << endl;
    cout << "Number2 = " << number2 << endl;

    // Swap
    temp = number1;
    number1 = number2;
    number2 = temp;

    cout << "\nAfter swapping:\n";
    cout << "Number1 = " << number1 << endl;
    cout << "Number2 = " << number2 << endl;

    return 0;
}