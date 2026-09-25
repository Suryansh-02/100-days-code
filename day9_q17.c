/*Q17: Write a program to find the roots of a quadratic equation and categorize them.*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, d, e, f;

    printf("Enter the coefficients: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a == 0) {
        printf("This is not a quadratic equation.");
        return 0;
    }

    d = (b * b) - (4 * a * c);

    if (d > 0) {
        e = (-b + sqrt(d)) / (2 * a);
        f = (-b - sqrt(d)) / (2 * a);

        printf("The roots are: %.2f and %.2f", e, f);
    }
    else if (d == 0) {
        e = -b / (2 * a);

        printf("Both roots are: %.2f", e);
    }
    else {
        printf("The equation has complex roots.");
    }

    return 0;
}