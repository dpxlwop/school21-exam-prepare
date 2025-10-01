#include <stdio.h>

int main() {
    int number, max_number, devider = 10;  // devider - делитель, для выделения цифры из числа
    if (scanf("%d", &number) != 1) return printf("n/a");  // ввод с проверкой
    if (number < 0) number *= -1;
    max_number = number % 10;   // получаем еденицы, считаем ее максимумом
    while (devider < number) {  // пока делитель меньше числа - идем в цикл
        if (number / devider % 10 >
            max_number) {  // выделение одной цифры из числа и проверка больше ли она, чем максимальная цифра
            max_number = number / devider % 10;  // меняем макс цифру если она больше чем текущая
        }
        devider *= 10;
    }
    devider *= 10;  // делаем еще одну итерацию, что бы захватить последний разряд
    if (number / devider % 10 > max_number) {
        max_number = number / devider % 10;
    }
    devider *= 10;
    printf("%d", max_number);
    return 0;
}
