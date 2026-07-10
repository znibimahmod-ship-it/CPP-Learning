#include <iostream>
using namespace std;

enum enMonth {Jan = 1, Feb = 2, Mar = 3, Apr = 4, May = 5, Jun = 6,Jul = 7, Aug = 8, Sep = 9, Oct = 10, Nov = 11, Dec = 12};

enMonth input() {
    int m;

    cout << "enter number of the Month: ";
    cin >> m;

    return (enMonth)m;
}

string Check(enMonth Month) {
    switch (Month) {
    case enMonth::Jan:
        return "January";
    case enMonth::Feb:
        return "February";
    case enMonth::Mar:
        return "March";
    case enMonth::Apr:
        return "April";
    case enMonth::May:
        return "May";
    case enMonth::Jun:
        return "June";
    case enMonth::Jul:
        return "July";
    case enMonth::Aug:
        return "August";
    case enMonth::Sep:
        return "September";
    case enMonth::Oct:
        return "October";
    case enMonth::Nov:
        return "November";
    case enMonth::Dec:
        return "December";
    default:
        return "Invalid Month";
    }
}

void Print(string month) {
    cout << month;
}

int main() {

    Print(Check(input()));

    return 0;
}