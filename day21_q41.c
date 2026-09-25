#include <stdio.h>
int main() {
    int n, first, last, temp, divisor = 1, result;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp /= 10;
        divisor *= 10;
    }
    first = temp;
    result = n - first * divisor - last + last * divisor + first;
    printf("%d", result);
    return 0;
}
