#include <stdio.h>
int main() {
    int n, d, product = 1;
    scanf("%d", &n);
    while (n != 0) {
        d = n % 10;
        if (d % 2 != 0) product *= d;
        n /= 10;
    }
    printf("%d", product);
    return 0;
}
