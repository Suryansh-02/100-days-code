#include <stdio.h>
int main() {
    int n, i;
    double sum = 1.0;
    scanf("%d", &n);
    for (i = 2; i <= n; i++)
        sum += (double)(2 * i - 1) / (2 * i);
    printf("Approximate sum: %.2f", sum);
    return 0;
}
