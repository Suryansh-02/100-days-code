#include <stdio.h>
int main() {
    long long n, temp, divisor = 1;
    scanf("%lld", &n);
    temp = n;
    while (temp >= 10) {
        divisor *= 10;
        temp /= 10;
    }
    while (divisor > 0) {
        int digit = (n / divisor) % 10;
        printf("%d", digit == 0 ? 1 : 0);
        divisor /= 10;
    }
    return 0;
}
