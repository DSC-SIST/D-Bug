/*
    Given two sorted arrays, merge them such that the elements are not repeated.

    Difficulty Level : HARD
*/

#include<stdio.h>

int main(void)
{
	int a[100], b[100], c[100], i, j, k, l, m, n;
	printf("\n---------------------------------------------------------------\n");

	printf("Array  size 1: ");
	scanf("%d", &m);
	printf("Elements to array 1 : \n");
	for(i = 0; i < m; i++)
		scanf("%d", &a[i]);

	printf("Array  size 2: ");
	scanf("%d", &n);
	printf("Elements to array 2 : \n");
	for(i = 0; i < n; i++)
		scanf("%d", &b[i]);

	printf("\n---------------------------------------------------------------\n");
	printf("\nArray 1 elements :");
	for(i = 0; i < m; i++)
		printf("%d ", a[i]);
	printf("\nArray 2 elements :");
	for(i = 0; i < n; i++)
		printf("%d ", b[i]);
	for(i = 0; i < m; c[i] = a[i], i++);        //save array 1 elements to array 3
	for(j = 0; j < n; c[i] = b[j], i++, j++);   //save array 2 elements to array 3
	l = m + n;                         //l is length of array 3

	printf("\nArray 3 elements :");
	for(i = 0; i < l; i++)
		printf("%d ", c[i]);
    printf("\n");
    printf("\n---------------------------------------------------------------\n");
    return 0;
}