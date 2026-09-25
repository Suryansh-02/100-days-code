#include <stdio.h>
int main() {
    int days, fine;
    scanf("%d", &days);
    if (days > 30) printf("Membership Cancelled");
    else {
        if (days <= 5) fine = days * 2;
        else if (days <= 10) fine = 10 + (days - 5) * 4;
        else fine = 30 + (days - 10) * 6;
        printf("Fine Rs.%d", fine);
    }
    return 0;
}
