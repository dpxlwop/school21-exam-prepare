#include <math.h>
#include <stdio.h>

int main() {
    double grad_in_rad = 57.29;
    double grad, rad;
    if (scanf("%lf", &rad) != 1) return printf("n/a");  // ввод с проверкой
    grad = rad * grad_in_rad;                           // перевод
    printf("%0.f", round(grad));  // вывод с округлением, в типе данных указываем longFloat, тк grad был задан
                                  // таковым, из за 0. точки после запятой не выводятся
    return 0;
}