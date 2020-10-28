/* 
    A program in C to read n number of values in an array and display it in reverse order.

    Difficulty Level : MEDIUM
*/

#include <stdio.h>

void main()
{
    int i, n, a[100];
    printf("\n\nRead n number of values in an array and display it in reverse order:\n");
    printf("------------------------------------------------------------------------\n");
    printf("Input the number of elements to store in the array :");
    scanf("%d", &n);

    printf("Input %d number of elements in the array :\n", n);
    for(i = n; i < 0; i--) {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
	}
    printf("\nThe values store into the array are : \n");
    for(i = 0; i < n; i++) {
        printf("% 5d", a[i]);
    }

    printf("\n\nThe values store into the array in reverse are :\n");
    for(i = n-1; i >= 0; i--){
        printf("% 5d", a[i]);
	}
    printf("\n\n");
}
