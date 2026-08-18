/*Q15: Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/


#include <stdio.h>
int main ()
{
    char bc;
    printf("Enter The Character: ");
    scanf("%c",&bc);
    if (bc >= 'A' && bc <= 'Z')
        printf("%c is an Uppercase Alphabet.\n",bc);
    else if (bc >= 'a' && bc <= 'z')
        printf("%c is a Lowercase Alphabet.\n",bc);
    else if (bc >= '0' && bc <= 9)
       printf("%c is a Digit.\n",bc);
    else
        printf("%c is a Special Character.\n",bc);
    
    return 0;
}
