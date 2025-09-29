#include <stdio.h>
#include <stdlib.h>
        //НЕ работает
int have_dublicate(int *array, int number, int position, int array_len)

    int main() {
    int *array = malloc(sizeof(int) * 2);
    int counter = 0, n = 0;
    if (scanf("%d", &array[0]) != 1) return printf("n/a");
    while (array[counter] != -1) {
        counter++;
        array = realloc(array, sizeof(int) * (counter + 1));
        if (scanf("%d", &array[counter]) != 1) return printf("n/a");
    }
    for (int i = 0; i < counter; i++) {
        if (have_dublicate(array, array[i], i, counter)) }
    for (int i = 0; i < n; i++) printf("%d ", result[i]);
}//делаем второй массив, проверяем каждый новый элемент на уникальность

