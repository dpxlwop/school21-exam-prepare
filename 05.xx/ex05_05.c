#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = malloc(sizeof(int) * 2);
    int counter = 0;
    if (scanf("%d", &array[0]) != 1) return printf("n/a");  // вводим первый элемент массива
    while (array[counter] != -1) {
        counter++;
        array = realloc(array, sizeof(int) * (counter + 1));
        if (scanf("%d", &array[counter]) != 1)
            return printf("n/a");  // вводим последующие элементы, расширяя память
    }
    for (int i = counter - 1; i >= 0; i--) {  // выводим элементы массива с конца
        printf("%d", array[i]);
        if (i != 0) printf(" ");
    }
    free(array);
}
