/*Q16: Write a program to input three numbers and find the largest among them using if–else.*/


#include <stdio.h>
int main ()
{
    int x,y,z;
    printf("Enter Three Numbers: ");
    scanf("%d %d %d",&x,&y,&z);
    if ( x >= y && x>=z)
    printf("%d is the Largest Number\n",x);
    else if ( y >= z && y>=x)
    printf("%d is the Largest Number.\n",y);
    else 
    printf("%d is the Largest Number.\n",z);
    return 0;
}
