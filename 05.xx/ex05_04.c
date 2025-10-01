#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(sizeof(int));  // объявляем массив
    if (arr == NULL) return printf("n/a");

    int n = 0;  // размер массива
    if (scanf("%d", &arr[0]) != 1) {
        return printf("n/a");
    }

    while (arr[n] != -1) {  // стандартный ввод с realloc
        n++;
        arr = realloc(arr, sizeof(int) * n + 1);

        if (arr == NULL) return printf("n/a");

        if (scanf("%d", &arr[n]) != 1) {
            return printf("n/a");
        }
    }

    for (int i = 0; i < n - 1; i++) {  // пузырьковый сорт
        int temp = 0;
        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    int *arr_2 = malloc(n * sizeof(int));

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == arr[i + 1]) {  // если одно число стоит рядом - пропускаем итерацию
            continue;
        }
        arr_2[count++] = arr[i];  // иначе - добавляем уникальное число в новый массив
    }

    for (int i = 0; i < count; i++) {  // вывод
        printf("%d", arr_2[i]);
        if (i != count - 1) printf(" ");
    }
    free(arr);
    free(arr_2);

    return 0;
}
