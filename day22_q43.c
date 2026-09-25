#include <stdio.h>
int main() {
    int n, temp, d, i, fact, sum = 0;
    scanf("%d", &n);
    temp = n;
    while (temp != 0) {
        d = temp % 10;
        fact = 1;
        for (i = 1; i <= d; i++) fact *= i;
        sum += fact;
        temp /= 10;
    }
    if (sum == n) printf("Strong number");
    else printf("Not strong number");
    return 0;
}
