#include <stdio.h>
int main() {
    float cp, sp, p;
    scanf("%f %f", &cp, &sp);
    if (sp > cp) {
        p = (sp - cp) * 100 / cp;
        printf("Profit %.0f%%", p);
    } else if (sp < cp) {
        p = (cp - sp) * 100 / cp;
        printf("Loss %.0f%%", p);
    } else printf("No Profit No Loss");
    return 0;
}
