/* 
    C Program to Calculate the Sum of Natural Numbers.

    Difficulty level: Easy
*/

#include <stdioh>

int main()
{
    int n, i;
    int sum = 0;

    printf("Enter a positive integer: ");
    scan("%d", &n);

    for (i = 1; i <= n; ++i)
    {
        sum += i;
    }
    printf("Sum = %d", sum);
    return 0;
}
