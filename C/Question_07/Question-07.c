#include<stdio.h>
#include<conio.h>
// This programme doesn't returning all the leap years correctly, find the bug and fix it
int main()
{
    int year;
    printf("Enter the year");
    scanf("%d",&year);
    {
        if(year%4==0)
        {
            printf("This is a leap year");
        }
        else
            printf("Not a leap year");
    }
}