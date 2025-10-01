#include <stdio.h>
// для умножения вектора n-ого пространства нужно умножить и сложить все координаты между собой, т.е.
//(x1*x2) + (y1*y2) ... (n1*n2) = результат
int main() {
    int n, result = 0;
    if (scanf("%d", &n) != 1) return printf("n/a");  // ввод размерности
    int vector1[n], vector2[n];
    for (int i = 0; i < n; i++)
        if (scanf("%d", &vector1[i]) != 1) return printf("n/a");
    for (int i = 0; i < n; i++)
        if (scanf("%d", &vector2[i]) != 1) return printf("n/a");    // ввод обоих векторов
    for (int i = 0; i < n; i++) result += vector1[i] * vector2[i];  // умножение
    printf("%d", result);
}