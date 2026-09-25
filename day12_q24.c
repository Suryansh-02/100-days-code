#include <stdio.h>
int main() {
    int units;
    float bill;
    scanf("%d", &units);
    if (units <= 100) bill = units * 5;
    else if (units <= 200) bill = 500 + (units - 100) * 7;
    else if (units <= 300) bill = 1200 + (units - 200) * 10;
    else bill = 2200 + (units - 300) * 12;
    printf("Bill: Rs.%.0f", bill);
    return 0;
}
