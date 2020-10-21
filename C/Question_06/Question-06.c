//program to print ASCII value of a character
#include<stdio.h>
#include<conio.h>
void main()
{
  char k,ascii;
  clrscr();
  printf("\nEnter a key from keyboard:");
  scanf("%c",&k);
  printf("ASCII value of %c = %d",k,k);
  getch();
}