#include <stdio.h>

int main() {
    int number, max_number;
    if (scanf("%d", &number) != 1) return printf("n/a");    //ввод первого числа с проверкой
    max_number = number;    //задаем первое число последовательности как максимальное
    while (number != -1) {  //пока введенное число не -1
        if (scanf("%d", &number) != 1) return printf("n/a");    //вводим новое и проверяем его
        if (number > max_number) max_number = number;       //если введенное число больше максимального - меняем
    }
    printf("%d", max_number);
    return 0;
}