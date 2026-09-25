#include <stdio.h>
int main() {
    int r, c, a[20][20], i, j, symmetric = 1;
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
        for (j = 0; j < c; j++) scanf("%d", &a[i][j]);
    if (r != c) symmetric = 0;
    else
        for (i = 0; i < r; i++)
            for (j = 0; j < c; j++)
                if (a[i][j] != a[j][i]) symmetric = 0;
    printf(symmetric ? "True" : "False");
    return 0;
}
