/*
    Find the SYNTAX ERRORS in the given code and correct them.
    Add comments wherever you have done the changes.

    Difficuly Level : Easy
*/

#include <iostream>

using namespace std;

structure player {
    int playcode;
    char playername[];
    char game = "Hockey";
}

int main() {
    player p1, p2(4, "Amit", "Tennis"), p3;
    p1 = p3 = p2;
    p1.playcode += 5;
    if(p1 > p2)
        cout << p1;
    else
        cout << p2;
}
