#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = malloc(sizeof(int));
    if (arr == NULL) return printf("n/a");

    int n = 0;
    if (scanf("%d", &arr[0]) != 1) {
        return printf("n/a");
    }

    while (arr[n] != -1) {
        n++;
        arr = realloc(arr, sizeof(int) * n + 1);

        if (arr == NULL) return printf("n/a");

        if (scanf("%d", &arr[n]) != 1) {
            return printf("n/a");
        }
    }

    int count = 0;
    for (int i = 0; i < n; i++) {
        int is_number = 0; // флаг проверки на то что число уже было в нашем массиве
        for (int j = count - 1; j >= 0 && i != 0; j--) // проходимся по числам которые мы оставляем в массиве
        {
            if (arr[i] == arr[j]) // если число равно какому то числу в уже записанных в начале то поднимаем флаг
            {
                is_number = 1;
            }
        }
        if (is_number != 1) // если флаг не поднят  то перезаписываем по индексу count наш массив заново с начала
        {
            arr[count++] = arr[i];
        }
    }

    for (int i = 0; i < count; i++) {
        printf("%d", arr[i]);
        if (i != count - 1) printf(" ");
    }
    free(arr);

    return 0;
}
