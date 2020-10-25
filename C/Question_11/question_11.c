/* 
    C Program to check whether a given number is positive or negative.

    Difficulty level: Easy    
*/

#include <stdio.h>

int main()
{
    int number;
    printf("Enter a number:");
    scanf("%d",&number);

    if (number <= 0)
    {
        if (number == 0)
            printf("The given number is 0!");
        else
        {
            printf("The given number is Negative..!!");
        }
    }
    else
    {
        printf("The given number is Positive..!!");
    }
    return 0;
}
