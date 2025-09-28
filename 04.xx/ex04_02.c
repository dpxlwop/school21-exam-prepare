#include <stdio.h>

int main() {
    int number, max_number;
    if (scanf("%d", &number) != 1) return printf("n/a");
    max_number = number;
    while (number != -1) {
        if (scanf("%d", &number) != 1) return printf("n/a");
        if (number > max_number) max_number = number;
    }
    printf("%d", max_number);
    return 0;
}