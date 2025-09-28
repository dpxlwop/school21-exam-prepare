#include <stdio.h>

int factorial(int number);

int main() {
    int bin_k, n;
    if (scanf("%d", &n) != 1) return printf("n/a");
    for (int k = 0; k <= n; k++) {
        bin_k = factorial(n) / (factorial(k) * factorial((n - k)));
        printf("%d", bin_k);
        if (k != n) printf(" ");
    }
    return 0;
}

int factorial(int number) {
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}