#include <stdio.h>
int main() {
    int n, a[100], i, key, low, high, mid, index = -1;
    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &key);
    low = 0; high = n - 1;
    while (low <= high) {
        mid = (low + high) / 2;
        if (a[mid] == key) { index = mid; break; }
        else if (a[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    if (index == -1) printf("-1");
    else printf("Found at index %d", index);
    return 0;
}
