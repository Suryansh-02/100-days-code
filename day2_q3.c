#include <stdio.h>
int main()
{
    int a,b,c,d;
    printf("Enter length and breadth of rectangle: ");
    scanf("%d %d",&a,&b);
    c = 2*(a+b);
    d = a*b;
    printf("Perimeter of rectangle: %d\n", c);
    printf("Area of rectangle: %d\n", d);
    return 0;
}