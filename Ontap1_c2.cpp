#include <stdio.h>

long long S(int n) {
    if (n == 0) {
        return 1;
    }

    return S(n - 1) + (2 * n + 1);
}

int main() {
    int n;

    do {
        printf("Nhap n: ");
        scanf("%d", &n);
    } while (n < 0);

    printf("S(%d) = %lld", n, S(n));

    return 0;
}