/*
    Identify the types of error(s) in the given code and rewrite the code after correcting error(s).

    Difficuly Level : Easy
*/

#include <iostream>

using namespace std;

int main() {
    char ch;
    float a = -5.8, b = 2;

    cin >> ch;

    if (toupper(ch) == 'Y')
    cout << a % b;
    b -= 2;
    else
    cout << endl << pow(b, (int)a);

    return 0;
}
