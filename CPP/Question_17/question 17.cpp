
//Store and Display Information Using Structure
#include <iostream>
using namespace std;

struct student
{

//declare the  datatypes properly
};

int main() 
{
    student s;
    cout << "Enter information," << endl;
    cout << "Enter name: ";
    cin >> s.name;
    cout << "Enter roll number: ";
    cin >> s.roll;
    cout << "Enter marks: ";
    cin >> s.marks;

    cout << "\nDisplaying Information," << endl;
    cout << "Name: " << s.name << endl;
    cout << "Roll: " << s.roll << endl;
    cout << "Marks: " << s.marks << endl;
    return 0;
}



/* OUTPUT
Enter information,
Enter name: Bill
Enter roll number: 4
Enter marks: 55.6

Displaying Information,
Name: Bill
Roll: 4
Marks: 55.6
*/
