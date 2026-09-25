#include <stdio.h>
int main() {
    int n, temp, digits = 0, sum = 0, d, i, power;
    scanf("%d", &n);
    temp = n;
    do { digits++; temp /= 10; } while (temp != 0);
    temp = n;
    while (temp != 0) {
        d = temp % 10;
        power = 1;
        for (i = 0; i < digits; i++) power *= d;
        sum += power;
        temp /= 10;
    }
    if (sum == n) printf("Armstrong");
    else printf("Not Armstrong");
    return 0;
}
