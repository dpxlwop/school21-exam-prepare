#include <stdio.h>

int main() {
    int number, new_number;
    if (scanf("%d", &number) != 1) return printf("n/a");  // ввод числа с проверкой
    new_number = (number % 10 * 100) + (number / 10 % 10 * 10) + (number / 100);
    // перестановка чисел (десятки в сотни) + (число в середине оставляем) + (сотни в десятки)
    if (number < 0)
        printf("%04d", new_number);
    else
        printf("%03d", new_number);
    return 0;
}
