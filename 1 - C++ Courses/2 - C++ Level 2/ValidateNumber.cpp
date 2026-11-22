#include <iostream>
using namespace std;

void Validate_Number() {
    int Number;
    
    cout << "enter Number: ";
    cin >> Number;

    while (cin.fail() == true) {
        cin.clear();
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        cout << "!!! Enter Validate Number: ";
        cin >> Number;
    }
    cout << "Number is: " << Number;

}

int main(){
    ///////////////// Validate Number

    Validate_Number();

    return 0;
}
