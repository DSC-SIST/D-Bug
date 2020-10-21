#include <stdio.h>
#include <string.h>

// this is a programme to convert uppercase letters to lower case characters
int main() {
   char s[1];
   int i;
   printf("\nEnter a string : ");
   gets(s);

   for (i = 0; s[i]!='\0'; i++)
    {
      if(s[i] <= 'a' && s[i] >= 'z')
        {
         s[i] = s[i] - 23;
        }
      else
       {
         s[i] = s[i] + 23;
        }
   }
   printf("\n String is = %s", i);
   return 0;
}