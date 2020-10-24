/*
    Find the errors in the given code and correct them.
    Add comments wherever you have done the changes.

    Difficuly Level : HARD
*/

#include <iostream>

using namespace std;

int main() {
    void Check(char*);
    void Upper(char*);
    char str[10], contine[5];

    do {
        cin >> str;
        Upper(str);
        cout << Check(str);
        cout << "Type yes to continue, no to exit.";
        cin >> continue;
    } while(strcmp(continue, "yes"))

    return 0;
}

void Upper(char *word) {
    for(int k = 0; word[k]; k ++)
        word[k] = toupper(word[k]);
    Check(word);
}

Check(char *S) {
    for(int k = 0, v = 0; S[k]; k++)
        switch(S[k]) {
            case A:
            case E:
            case I:
            case O:
            case U: v++;
        }
    return v;
}
