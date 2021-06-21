/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_inttostr
*/

#include "my_libbox.h"

char *my_inttostr(int nb)
{
    int ptr = -1;
    char *str = malloc(sizeof(char) * 1024);

    if (!str)
        return NULL;
    if (nb == 0) {
        str[0] = '0';
        str[1] = '\0';
        return (str);
    }
    for (int i = nb; i != 0; ptr++)
        i /= 10;
    str[ptr + 1] = '\0';
    for (int i = nb; i != 0; ptr--) {
        str[ptr] = (i % 10)  + '0';
        i /= 10;
    }
    return str;
}