#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = malloc(sizeof(int) * 2);
    int counter = 0;
    if (scanf("%d", &array[0]) != 1) return printf("n/a");
    while (array[counter] != -1) {
        counter++;
        array = realloc(array, sizeof(int) * (counter + 1));
        if (scanf("%d", &array[counter]) != 1) return printf("n/a");
    }
    int fn = 0, fk = counter - 1;
    for (int i = 0; i < counter; i++) {
        if (i % 2 != 0) {
            printf("%d", array[fk]);
            fk--;
        } else {
            printf("%d", array[fn]);
            fn++;
        }
        if (i + 1 != counter) printf(" ");
    }
    free(array);
}