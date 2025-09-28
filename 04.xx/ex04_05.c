#include <stdio.h>

int main() {
    int number, result = 1, devider = 10, flag = 0;
    if (scanf("%d", &number) != 1) return printf("n/a");        //первая часть программы аналогична 04.04
    if (number < 0) number *= -1;
    while (devider < number) {
        if (number / devider % 10 % 2 != 0) {       //изменение только в условии, мы проверяем что число не четное
            result *= number / devider % 10;
            flag = 1;
        }
        devider *= 10;
    }
    if (number < 10) {
        if (number % 10 % 2 != 0) {
            result *= number % 10;
            flag = 1;
        }
    }
    if (flag == 1)
        printf("%d", result);
    else
        printf("0");
    return 0;
}