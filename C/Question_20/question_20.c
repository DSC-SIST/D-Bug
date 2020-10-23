/* 
    Finding the maximum and minimum number in an array.

    Difficulty Level: Hard
*/

#include <stdio.h>

int main()
{
    const int max = 10;
    int A[max], pos1, pos2, min = 0;
    for (int k = 0; k <= 9; ++k)
    {
        scanf("%d", &A[k]);
        if (A[k] >= max)
            pos1 = k;
        max = A[k];
        else if (A[k] <= min)
            pos2 = k;
        min = A[k];
    }
    for (int sum = 0; k = 0; k < 10; k++)
        sum += A[k];
    printf("Sum = %d\nAverage = %.2d\nMax = %d @ %d\nMin = %d @ %d", sum, sum / 10, max, pos1, min, pos2);
}
