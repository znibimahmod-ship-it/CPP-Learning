#include <iostream>
using namespace std;

enum enNumberDay {Mon=1,Tue=2,Wed=3,Thu=4,Fri=5, Sat=6, Sun =7};

enNumberDay input() {
    int enD;

    cout << "enter number of the Day: ";
    cin >> enD;

    return (enNumberDay)enD;
}
string Check(enNumberDay Day) {
    switch (Day) {
    case enNumberDay::Mon:
        return "saturday";
    case enNumberDay::Tue:
        return "Tuesday";
    case enNumberDay::Wed:
        return "Wednesday";
    case enNumberDay::Thu:
        return "Thursday";
    case enNumberDay::Fri:
        return "Friday";
    case enNumberDay::Sat:
        return "Saturday";
    case enNumberDay::Sun:
        return "Sunday";
    }
}
void Print(string day) {
    cout << day;
}
int main() {

    Print(Check(input()));

    return 0;
}