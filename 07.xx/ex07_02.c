#include <stdio.h>
#define LIMIT 1024

int main() {
    char string[LIMIT], new_string[LIMIT], str_to_delete[LIMIT];
    int strlen = 0, str2delete_len = 0;

    while ((string[strlen] = getchar()) != '\n')  // вводим строку
        strlen++;
    getchar();  //берем еще один чар, что бы "съесть" лишний \n
    while ((str_to_delete[str2delete_len] = getchar()) != '\n')  // вводим строку, которую надо удалить
        str2delete_len++;
    int pos;

    for (int i = 0; i <= strlen; i++) {  // идем по всей длине строки
        int j = 0;                       // счетчик совпадений
        while (j < str2delete_len &&
               string[i + j] == str_to_delete[j])  // пока счетчик меньше длины строки для удаления и символ в
                                                   // строке равен удаляемому символу
            j++;
        if (j ==
            str2delete_len)  // если счетчик совпадений равен длине удаляемой строки - сохраняем ее позицию
            pos = i;
    }
    int k = 0;
    for (int i = 0; i < strlen; i++) {
        if (i == pos - 1 )
            i += str2delete_len;
        else{
            new_string[k] = string[i];
            k++;}
    }
    printf("%s", new_string);  // выводим строку
    return 0;
}