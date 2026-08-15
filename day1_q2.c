#include <stdio.h>
int main() 
{
    int a,b,c,d,e,f;
    printf("Enter two numbers: ");
    scanf("%d %d ",&a,&b);
    c = a + b;
    d = a - b;
    e = a * b;
    f = a / b;
    printf("Sum: %d\n", c);
    printf("Difference: %d\n", d);
    printf("Product: %d\n", e);
    printf("Quotient: %d\n", f);
    return 0;
}