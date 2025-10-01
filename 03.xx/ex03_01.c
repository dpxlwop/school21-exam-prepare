#include <math.h>
#include <stdio.h>

int main() {
    double v, r;
    int p = 21500;
    if (scanf("%lf", &r) != 1) return printf("n/a");  // ввод радиуса с проверкой
    v = (4.0 / 3) * M_PI * pow(r, 3);                 // вычисление объема
    printf("%.0lf", p * v);  // вычисление массы(из формулы плотности)
    return 0;
}