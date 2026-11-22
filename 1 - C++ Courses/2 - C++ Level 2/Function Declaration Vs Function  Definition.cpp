#include <iostream>
#include <string>
using namespace std;

void Sum(int, int);

int main() {

    Sum(5,3);

    return 0;
}

void Sum(int N1, int N2) {

    cout << "somme: " << N1 + N2;
}
