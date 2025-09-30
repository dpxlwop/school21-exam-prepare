#include <stdio.h>
#define LIMIT 1024

int main() {
    char string[LIMIT], new_string[LIMIT];
    int i = 0, j = 0, end_index = 0;
    while ((string[i] = getchar()) != '\n')  // вводим строку
        i++;
    for (i = 0; string[i] == ' '; i++) {
    }  // считаем кол-во пробелов до первого символа
    new_string[0] = string[i];  // заносим первую букву/цифру, счетчик делаем индексом занесенного значения,
                                // что бы его пропустить
    while (string[i] != '\n') {
        if (string[i] == ' ') {  // если iй символ в строке - пробел, то нужно проверить уникальный ли он
            if (new_string[j - 1] != ' ') {
                new_string[j++] = ' ';  // если в новой строке до пробела нет другого пробела - проставляем
                                        // его
                end_index = j;  // переменная хранит индекс последнего введенного пробела
            }
        } else
            new_string[j++] = string[i];  // во всех остальных случаях - переносим символ
        i++;
    }
    for (int i = 0; i < end_index - 1; i++)  // вывод посимвольно, без последнего символа(пробела)
        putchar(new_string[i]);
    return 0;
}