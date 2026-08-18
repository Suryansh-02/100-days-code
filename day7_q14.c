/*Q14: Write a program to input a character and check whether it is a vowel or consonant using if–else.*/


#include <stdio.h>
int main()
{
    char bc;
    printf("Enter The Alphabet: ");
    scanf("%c",&bc);
    if (bc == 'a' || bc == 'e' || bc == 'i' || bc == 'o' || bc == 'u' ||
        bc == 'A' || bc == 'E' || bc == 'I' || bc == 'O' || bc == 'U')
    {
        printf("%c is a Vowel.\n",bc);
    }
    else {
        printf("%c is a Consonant.\n",bc);
    }
}
