#include <stdio.h>
int main() {
    int n, binary = 0, place = 1;
    scanf("%d", &n);
    if (n == 0) printf("0");
    else {
        while (n > 0) {
            binary += (n % 2) * place;
            place *= 10;
            n /= 2;
        }
        printf("%d", binary);
    }
    return 0;
}
