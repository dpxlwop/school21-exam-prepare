#include <stdio.h>

int main() {
    int n, result = 0;
    if (scanf("%d", &n) != 1) return printf("n/a");
    int vector1[n], vector2[n];
    for (int i = 0; i < n; i++)
        if (scanf("%d", &vector1[i]) != 1) return printf("n/a");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &vector2[i]) != 1) return printf("n/a");
    for (int i = 0; i < n; i++) result += vector1[i] * vector2[i];
    printf("%d", result);
}