#include <stdio.h>
#include <stdlib.h>

void free_matrix(int **arr_a, int **arr_b, int **arr_c, int n);

int main() {
    int n = 1;

    if (scanf("%d", &n) != 1 && n <= 0)  // считываем размер матрицы
    {
        return printf("n/a");
    }

    int **arr_a = malloc(n * (sizeof(int *)));  // инициализация массивов указателей на указатели
    if (arr_a == NULL) {
        free(arr_a);  // освобождаем память если что то не так
        return printf("n/a");
    }
    int **arr_b = malloc(n * (sizeof(int *)));  // строк в матрицах, и выделение для
    if (arr_b == NULL) {
        free(arr_a);
        free(arr_b);  // освобождаем память если что то не так
        return printf("n/a");
    }
    int **arr_c = malloc(n * (sizeof(int *)));  // них динамической памяти
    if (arr_c == NULL) {
        free_matrix(arr_a, arr_b, arr_c, n);  // освобождаем память если что то не так
        return printf("n/a");
    }

    for (int i = 0; i < n; i++) {
        arr_a[i] = (int *)malloc(n * sizeof(int));  // выделение динамической памяти
        if (arr_a[i] == NULL) {
            free_matrix(arr_a, arr_b, arr_c, i);  // освобождаем память если что то не так
            return printf("n/a");
        }
        arr_b[i] = (int *)malloc(n * sizeof(int));  // для строк в массивах матриц
        if (arr_b[i] == NULL) {
            free_matrix(arr_a, arr_b, arr_c, i);  // освобождаем память если что то не так
            return printf("n/a");
        }
        arr_c[i] = (int *)malloc(n * sizeof(int));
        if (arr_c[i] == NULL) {
            free_matrix(arr_a, arr_b, arr_c, i);  // освобождаем память если что то не так
            return printf("n/a");
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &arr_a[i][j]) != 1)  // принимаем значения для 1ой матрицы
            {
                free_matrix(arr_a, arr_b, arr_c, n);  // освобождаем память если что то не так
                return printf("n/a");
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (scanf("%d", &arr_b[i][j]) != 1)  // принимаем значения для 2й матрицы
            {
                free_matrix(arr_a, arr_b, arr_c, n);  // освобождаем память если что то не так
                return printf("n/a");
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            arr_c[i][j] = 0;
            for (int k = 0; k < n; k++)  // считаем через формулу умножения квадратных матриц
            {
                arr_c[i][j] += (arr_a[i][k] * arr_b[k][j]);  // и заносим результат в 3юю матрицу
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d", arr_c[i][j]);
            if (j != n - 1) printf(" ");  // вывод в консоль 3ей матрицы
        }
        if (i != n - 1) printf("\n");
    }

    free_matrix(arr_a, arr_b, arr_c, n);  // освобождаем память

    return 0;
}

void free_matrix(int **arr_a, int **arr_b, int **arr_c, int n) {
    for (int i = 0; i < n; i++)  // освобождаем память всех строк матриц
    {
        free(arr_a[i]);
        free(arr_b[i]);
        free(arr_c[i]);
    }

    free(arr_a);  // освобождаем память от массивов указателей
    free(arr_b);
    free(arr_c);
}