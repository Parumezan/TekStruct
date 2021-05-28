/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_strarray
*/

#include "my_libbox.h"

static char **do_array(int size_y, int size_x)
{
    char **array;

    array = malloc(sizeof(char *) * (size_y + 1));
    if (!array)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        array[cpt] = my_calloc(sizeof(char) * (size_x + 1), '\0');
        if (!array[cpt])
            return NULL;
    }
    array[size_y] = NULL;
    return array;
}

char **my_strarray(char *str, char decal)
{
    int size_y = 0;
    int size_x = 0;
    int len = 0;
    char **array = NULL;

    if (!str)
        return NULL;
    size_y = my_iterchar(str, decal) + 1;
    size_x = my_lenintostr(str, decal);
    len = my_strlen(str) - 1;
    if (str[len] == decal)
        str[len] = '\0';
    array = do_array(size_y, size_x);
    if (!array)
        return NULL;
    my_fillstrarray(str, array, decal);
    return array;
}