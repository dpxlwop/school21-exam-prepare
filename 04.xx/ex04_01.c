#include <stdio.h>

int factorial(int number);

// формула биноминального коэффициента C для k n = n! / (k!*(n-k)!)
int main() {
    int bin_k, n;
    if (scanf("%d", &n) != 1)
        return printf("n/a");  // ввод n с проверкой, по условию k - изначально 0, следует до n
    for (int k = 0; k <= n; k++) {
        bin_k =
            factorial(n) / (factorial(k) * factorial((n - k)));  // берем факториал и расчитываем один коэф.
        printf("%d", bin_k);
        if (k != n) printf(" ");  // проверяем последнее ли число, если нет - выводим
    }
    return 0;
}

int factorial(int number) {  // функция взятия факториала
    // факториал - числа от 1 до n перемножаются, т.е.
    // 5! = 1*2*3*4*5
    int result = 1;
    for (int i = 1; i <= number; i++) {
        result *= i;
    }
    return result;
}