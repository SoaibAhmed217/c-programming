#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j && a[i][j] != 0) {
                printf("NO\n");
                return 0;
            }
            if (i == j && a[i][j] != 1) {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");

    return 0;
}
