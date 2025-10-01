#include <stdio.h>
#define LIMIT 1024

struct Student  // задаем структуру
{
    char name[LIMIT];  // Имя
    int mark;          // Оценка
};

int main() {
    int count, num_str2out = 0;
    char names_to_out[LIMIT][LIMIT];
    struct Student array[LIMIT];  // создаем массив объектов структуры
    double mean = 0;
    if (scanf("%d", &count) != 1) return printf("n/a");  // Ввод кол-ва студентов
    for (int i = 0; i < count; i++) {
        scanf("%s", array[i].name);  // вводим имя и оценку
        if (scanf("%d", &array[i].mark) != 1) return printf("n/a");
        mean += array[i].mark;
    }
    mean /= count;  // вычесление среднего
    for (int i = 0; i < count; i++) {
        if (array[i].mark >= mean) {  // идем по массиву объектов структуры, если оценка больше среднего
            for (int j = 0; array[i].name[j] != '\0';
                 j++) {  // \0 это конец строки если мы вводим ее через scanf
                names_to_out[num_str2out][j] = array[i].name[j];  // копируем имя в массив строк на вывод
            }
            num_str2out++;  // счетчик имен на вывод
        }
    }
    for (int i = 0; i < num_str2out; i++) {
        printf("%s", names_to_out[i]);  // выводим строки и ставим запятые
        if (i + 1 != num_str2out) printf(", ");
    }
    return 0;
}