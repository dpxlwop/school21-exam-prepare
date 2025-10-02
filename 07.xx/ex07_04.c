#include <stdio.h>
#define LIMIT 1024

int main() {
    char string[LIMIT], new_string[LIMIT];
    int i = 0, j = 0;

    
    while ((string[i] = getchar()) != '\n')     // ввод строки
        i++;
    string[i] = '\0'; // закрываем строку

    
    i = 0;
    while (string[i] == ' ')    // убираем пробелы в начале
        i++;

   
    for (; string[i] != '\0'; i++) {     // копируем символы с удалением лишних пробелов
        if (string[i] == ' ') {
            // если предыдущий символ в новой строке не пробел -> добавляем
            if (j > 0 && new_string[j - 1] != ' ')
                new_string[j++] = ' ';
        } else {
            new_string[j++] = string[i];
        }
    }

   
    if (j > 0 && new_string[j - 1] == ' ')      // убираем пробел в конце (если он есть)
        j--;

    new_string[j] = '\0'; // конец строки

    printf("%s", new_string);
    return 0;
}