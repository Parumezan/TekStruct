/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_concatstring
*/

#include "my_libbox.h"

char *my_concatstring(char *original, char *add)
{
    size_t cpt = 0;
    int orilen = my_strlen(original);
    int addlen = my_strlen(add);
    char *str = my_calloc((sizeof(char) * ((orilen + addlen) + 1)), 0);

    if (!str)
        return NULL;
    for (; original[cpt] != '\0'; cpt++)
        str[cpt] = original[cpt];
    for (size_t count = 0; add[count] != '\0'; cpt++, count++)
        str[cpt] = add[count];
    return str;
}