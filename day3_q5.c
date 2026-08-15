#include <stdio.h>
int main()
{
    int a,b;
    printf("Enter temperature in celsius: ");
    scanf("%d",&a);
    b = 32+(1.8*a);
    printf("Temperature in fahrenheit:%d\n",b);
    return 0;
}