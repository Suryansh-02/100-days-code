/*Q11: Write a program to input an integer and check whether it is even or odd using if–else.*/

#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    if (a % 2 == 0){
    printf("%d is an Even Number\n",a);
    }else {
    printf("%d is an Odd Number\n",a);
    }
    return 0;
}