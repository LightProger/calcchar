#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* Напишите программу, которая запрашивает имя пользователя и затем выводит первые буквы имени (или имен) и фамилии
 * в верхнем регистре без пробелов, точек и прочих знаков, только с переводом строки (\n). Предполагаем, что
 * пользователи вводят исключительно буквы (в нижнем или верхнем регистре, или обоих сразу) плюс по одному пробелу
 * между словами. Считайте, что ребята с именами Joseph Gordon-Levitt, Conan O’Brien или David J. Malan не будут
 * пользоваться программой. */

int main () {
    int i;
    char c;

    printf("Enter Name and Famaly: \n");

    for (i = 0; i < (c = getchar()); i++)
        {
            if (c == ' ')
            {
                i = -1;
            }
            if(i == 0)
            {
                c = toupper(c);
                printf("%c", c);
            }
            if(c == '\n')
            {
                exit(0);
            }
        }
    printf("\n");
    return 0;
}


