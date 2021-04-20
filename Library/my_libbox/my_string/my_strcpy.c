/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_strcpy
*/

#include "my_libbox.h"

char *my_strcpy(char *str)
{
    char *copy = NULL;
    int len = my_strlen(str);

    if (!len)
        return NULL;
    copy = my_calloc(len + 1, 0);
    if (!copy)
        return NULL;
    for (size_t cpt = 0; str[cpt] != '\0'; cpt++)
        copy[cpt] = str[cpt];
    return copy;
}