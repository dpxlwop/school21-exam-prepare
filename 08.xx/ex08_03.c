#include <stdio.h>
#define LIMIT 1024

struct Student  // задаем структуру
{
    char name[LIMIT];  // Имя
    int mark;          // Оценка
};

int main() {
    int count;
    struct Student array[LIMIT];  // создаем массив объектов структуры
    if (scanf("%d", &count) != 1) return printf("n/a");  // Ввод кол-ва студентов
    for (int i = 0; i < count; i++) {
        scanf("%s", array[i].name);  // вводим имя и оценку
        if (scanf("%d", &array[i].mark) != 1) return printf("n/a");
    }
    for (int i = 0; i < count; i++) {           //пузырьковый сорт массива структур по оценкам
        for (int j = 0; j < count - i - 1; j++) {
            if (array[j].mark > array[j+1].mark) {
                struct Student temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = count - 1; i >= 0; i--) {      //вывод с конца, формат я не знаю.
        printf("%s - %d\n", array[i].name, array[i].mark);
    }
    return 0;
}