#include <stdio.h>
#include <stdlib.h>

int main() {
    int *array = malloc(sizeof(int) * 2);
    int counter = 0;
    if (scanf("%d", &array[0]) != 1) return printf("n/a");  // ввод первого элемента
    while (array[counter] != -1) {
        counter++;
        array = realloc(array, sizeof(int) * (counter + 1));
        if (scanf("%d", &array[counter]) != 1)
            return printf("n/a");  // ввод массива и расширение памяти для каждого элемента
    }
    int fn = 0, fk = counter - 1;  // инициализация двух переменных, которые будут учавствовать в выводе
    for (int i = 0; i < counter; i++) {
        if (i % 2 !=
            0) {  // идем по массиву, если индекс, на котором мы находимся НЕ четный - выводим число с конца
            printf("%d", array[fk]);
            fk--;
        } else {
            printf("%d", array[fn]);  // иначе - выводим число
            fn++;
        }
        if (i + 1 != counter) printf(" ");  // печатаем пробел, если элемент не последний
    }
    free(array);
}