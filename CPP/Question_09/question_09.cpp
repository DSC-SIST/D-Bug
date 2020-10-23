/*
    Rewrite the given code after removing the syntax errors.

    Difficulty Level: HARD
*/

#include <iostream>
#define a = "Name";
typedef char[80] str;

using namespace std;

int main() {
    struct EMP {
        const int id;
        char name[20];
        float sal;   
    }
    
    str s[80];
    EMP e[5];

    cin >> s;
    someFunction(s, a);
    void read(EMP&);
    read(e);

    return 0;
}

void someFunction(char s[], char a[], int k = 1) {
    if(k != 1) 
        cout << strcpy(s, a);
    else
        cout << strcmp(s, a);
}

void read(EMP x[5]) {
    for(int I = 0; i < 5; i++)
        cin >> x[i].id >> x[i].name >> x[i].sal;
    for(int I = 0; i < 5; i++)
        cout << x[i].id << '/t' << x[i].name << '/t' << x[i].sal << '\n';
}
