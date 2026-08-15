#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter radius of circle: ");
    scanf("%d",&a);
    b = 3.14*a*a;
    c = 2*3.14*a;
    printf("Area of circle: %d\n", b);
    printf("Circumference of circle: %d\n", c);
    return 0;
}