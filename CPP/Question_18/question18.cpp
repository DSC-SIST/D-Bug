
//Reverse a sentence using recursion.
#include <iostream>
using namespace std;

void reverse(const string& a);

int main()
{
    string str;
    cout << " Please enter a string " << endl;
    getline(cin, str);
    //write the command to call the reverse function
    return 0;    
}

void reverse(const string& str)
{
    size_t numOfChars = str.size();

    if(numOfChars == 1)
       cout << str << endl;
    else
    {
       cout << str[numOfChars - 1];
       reverse(str.substr(0, numOfChars - 1));
    }
}


/*Output

Enter a sentence: margorp emosewa
awesome program
*/
