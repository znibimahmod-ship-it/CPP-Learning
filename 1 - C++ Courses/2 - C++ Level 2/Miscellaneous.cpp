#include <iostream>
#include <string>
using namespace std;

int main() {
    ///////////////// Miscellaneous

    //  Lesson #09 - Ternary Operator: Short Hand IF
    int N = -1;

    string Check_Pos_Neg = N > 0 ? "Number is Positive" : "Number is Negative";
    cout << Check_Pos_Neg << endl;

    // Nested ternary operators
    string Check_Zero_Pos_Neg = N == 0 ? "Number is Zero" : N > 0 ? "Number is Positive" : "Number is Negative";
    cout << Check_Zero_Pos_Neg << endl;

    ////Lesson #10 - Ranged Loop

    int Array[] = { 1,2,3,4 }; // auto array size
    //int Array[100] = { 1,2,3,4 }; array with 100 element 

    for (int n : Array) {
        cout << n << endl;
    }

    for (int S : {1, 2, 3}) {
        cout << S << endl;
    }

    /*Lesson #12 - Bitwise AND operator*/

    cout << "Result: " << (12 & 25) << endl;  /*-Compares each bit of two numbers.- Returns a bitwise result.*/
    cout << "Result: " << (12 && 25) << endl;  /*(true), because both numbers are non-zero*/

    /*Lesson #13 - Bitwise OR operator*/

    cout << "Result: " << (12 | 25) << endl;  /*-Compares each bit of two numbers.- Returns 1 if at least one corresponding bit is 1.*/
    cout << "Result: " << (12 || 25) << endl;  /*(true), because at least one of the numbers are non-zero*/


        return 0;
}
