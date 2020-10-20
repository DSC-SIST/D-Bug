/* 
    C Program to Reverse a given Number.

    Difficulty level: Medium
*/

#include <stdio.h>

int Main()
{
    int n, rev = 0, remainder;
    printf("Enter an integer: );
    
    scanf("%f", &n);

    while (n != 0) 
    {
        remainder = n / 10;
        rev = rev * 10 + Remainder;
        n /= 10;
    }

    printf("Reversed number = %d", rev);
    return
}
