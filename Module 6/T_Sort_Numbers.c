#include <stdio.h>

void printAscending(int a, int b, int c) {
    int min, max, mid;
    if (a < b && a < c) {
        min = a;
        if (b < c) {
            mid = b;
            max = c;
        } else {
            mid = c;
            max = b;
        }
    } else if (b < a && b < c) {
        min = b;
        if (a < c) {
            mid = a;
            max = c;
        } else {
            mid = c;
            max = a;
        }
    } else {
        min = c;
        if (a < b) {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", min, mid, max, a, b, c);
}

int main() {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    printAscending(a, b, c);
    return 0;
}
