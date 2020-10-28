/*
    A program to 
        - sort the elements at odd positions in descending order
        - sort the elements at even positons in ascending order.

    Difficulty Level : HARD
*/

#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    int *a, n, i, j;
    printf("Array size : ");
    scanf("%d", &n);

    a = malloc(sizeof(int) * n);
    printf("Enter Elements : ");
    for(i = 0; i < n; i++)
        scanf("%d", a);

    for(i = 0; i < n - 1; i++)
        for(j = i; j < n; j++)
        {
            if(i % 2)
            {
                if(a[i] > a[j])
                    a[i] = a[i] + a[j];
            }
            else
            {
                if(a[i] < a[j])
                    a[i] = a[i] + a[j];
            }
        }

    printf("Array elements  : ");
    for(i = 0; i < n; i++)
        printf("%d ", a[i]);
        printf("\n");

    free(a);
    return 0;
}
