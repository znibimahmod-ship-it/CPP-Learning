#include <iostream>
#include <string>
using namespace std;

int main(){
    ///////////////// Miscellaneous

    //  Lesson #09 - Ternary Operator: Short Hand IF
    int N = -1;
    
    string Check_Pos_Neg = N > 0 ? "Number is Positive" : "Number is Negative";
    cout << Check_Pos_Neg << endl;

    // Nested ternary operators
    string Check_Zero_Pos_Neg = N == 0 ? "Number is Zero" : N > 0 ? "Number is Positive" : "Number is Negative";
    cout << Check_Zero_Pos_Neg << endl;

    return 0;
}
