#include <stdio.h>
#define LIMIT 1024

int main(){
    char string[LIMIT], new_string[LIMIT];
    int i = 0, j = 1;
    while((string[i] = getchar()) != '\n')  //вводим строку
        i++;
    i = 1;
    new_string[0] = string[0];      //заносим первый символ, счетчик делаем еденицой, что бы его пропустить
    while (string[i] != '\n')   
    {
        if (string[i] == ' '){      //если iй символ в строке - пробел, то нужно проверить уникальный ли он
            if (new_string[j-1] != ' ')
                new_string[j++] = ' ';      //если в новой строке до пробела нет другого пробела - проставляем его
        }else
            new_string[j++] = string[i];    //во всех остальных случаях - переносим символ
        i++;
    }   
    printf("%s", new_string);       //выводим строку
    return 0;
}