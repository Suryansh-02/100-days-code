#include <stdio.h>
int main ()
{
    int a;
    printf("Enter the number: \n");
    scanf("%d",&a);
    if (a ==0)
    printf("The Integer is 0\n");
    else
    if (a <=0)
    printf("%d is a Negative Integer\n",a);
    else 
    printf("%d is a Positive Integer\n",a);
    return 0;
}