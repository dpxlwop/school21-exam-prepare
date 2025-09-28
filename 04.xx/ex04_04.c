#include <stdio.h>

int main() {
    int number, max_number, devider = 10;
    if (scanf("%d", &number) != 1) return printf("n/a");
    max_number = number % 10;
    while (devider < number) {
        if (number / devider % 10 > max_number) {
            max_number = number / devider % 10;
        }
        devider *= 10;
    }
    printf("%d", max_number);
    return 0;
}