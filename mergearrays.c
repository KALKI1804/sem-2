#include <stdio.h>

void mergeArrays(int a[], int b[], int n, int m) {
    if (n != m) {
        printf("-1\n");
        return;
    }

    int c[n+m];
    int i = 0, j = 0, k = 0;

    while (i < n && j < m) {
        if (a[i] >= b[j]) {
            c[k++] = a[i++];
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < n) {
        c[k++] = a[i++];
    }

    while (j < m) {
        c[k++] = b[j++];
    }

    printf("Merged array: ");
    for (i = 0; i < n+m; i++) {
        printf("%d ", c[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {7, 6, 5, 4, 3};
    int b[] = {10, 9, 8, 2, 1};
    int n = sizeof(a) / sizeof(a[0]);
    int m = sizeof(b) / sizeof(b[0]);

    mergeArrays(a, b, n, m);

    return 0;
}