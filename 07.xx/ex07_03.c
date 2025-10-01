#include <stdio.h>
#define LIMIT 1024

int main() {
    char string[LIMIT];  // обьявляем строку
    int strlen = 0, is_palindrome = 1;
    while ((string[strlen] = getchar()) != '\n') {           // вводим строку
        if (string[strlen] >= 'A' && string[strlen] <= 'Z')  // если буква заглавная
            string[strlen] += ('a' - 'A');  // прибавляем 32(разница между заглавной и строчной буквой в
                                            // ASCII)
        strlen++;
    }
    for (int i = 0; i < strlen; i++) {  // идем по всей длине строки
        if (string[i] != string[strlen - i - 1])  //-1 нужен что бы пропустить последний \n, в массиве строка
                                                  //выглядит так: Hello\n
            is_palindrome = 0;  // если i символ не равен противоположному - скидываем флаг
    }
    if (is_palindrome == 0)
        printf("NO");
    else
        printf("YES");
    return 0;
}