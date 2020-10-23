/* 
    C program to count vowels and consonants in a string using pointer.

    Difficulty level: Hard
*/

#include <stdio.h>

int main()
{
    char str[100];
    char *ptr;
    int count_of_vowel, count_of_consonant;

    printf("Enter a string: ")
    gets(str);

    //assign address of str to ptr
    ptr = str

    count_of_vowel = count_of_consonant = 0

    while (*ptr != '\0')
    {
        if (*ptr == 'A' || *ptr == 'E' || *ptr == 'I' || *ptr == 'O' || *ptr == 'U' || *ptr == 'a' || *ptr == 'e' || *ptr == 'i' || *ptr == 'o' || *ptr == 'u')
            count_of_vowel++;
        else
            count_of_consonant++;
        //increase the pointer, to point next character
        ptr++
    }

    printf("The total number of Vowels: %d, Consonants: %d\n", count_of_vowel, count_of_consonant);
    return 0;
}
