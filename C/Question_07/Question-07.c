/*
    A program to check whether the given year is a leap year or not.

    Difficulty Level : MEDIUM
*/

#include<stdio.h>
#include<conio.h>

int main()
{
    int year;
    printf("Enter the year");
    scanf("%d", &year);
    {
        if(year % 4 == 0)
            printf("This is a leap year");
        else
            printf("Not a leap year");
    }
}