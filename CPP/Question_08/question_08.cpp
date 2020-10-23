/*
    Vignesh was asked to implement a code using switch case statements. 
    But he has done it using if-else ladder and lots of bugs.
    Help him out by correcting the given code using nested switch replacing if-else-if.

    Difficulty Level : HARD
*/

#include <iostream>

using namespace std;

int main() {
    int version;
    char type;
    cout << "Enter the option (s - "Standard" and p - "Professional")"
    type = getchar()
    cout << "Enter the version : ";
    cin >> version;

    if (type == 's')
    if(version == 313)
    rebate = price - price * .25;
    else if(version == 233)
    rebate = price - price * .35;
    else
    rebate = price - price * .12;
    else if(type == 'p')
    if (version == 111)
    tax = price + .2;
    else if(verion == 114)
    tax = price + .3;
    else
    tax = price + .43;
    else
    cout << "\nNot Available";

    return 0;
}
