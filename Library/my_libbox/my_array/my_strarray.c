/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_strarray
*/

#include "my_libbox.h"

char **my_strarray(char *str, char decal)
{
    char **array;
    int size_y = my_iterchar(str, decal) + 1;
    int size_x = my_lenintostr(str, decal);
    int len = my_strlen(str) - 1;

    if (str[len] == decal)
        str[len] = '\0';
    array = malloc(sizeof(char *) * (size_y + 1));
    if (!array)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        array[cpt] = my_calloc(sizeof(char) * (size_x + 1), '\0');
        if (!array[cpt])
            return NULL;
    }
    array[size_y] = NULL;
    my_fillstrarray(str, array, decal);
    return array;
}