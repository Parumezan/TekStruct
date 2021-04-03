/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_strarray
*/

#include "my_libc.h"

static void fill_up_array(char *str, char **array, char decal)
{
    int nby = 0;
    int nbx = 0;

    for (size_t cpt = 0; str[cpt] != '\0'; cpt++) {
        if (str[cpt] == decal) {
            nby++;
            cpt++;
            nbx = 0;
        }
        array[nby][nbx] = str[cpt];
        nbx++;
    }
}

char **my_strarray(char *str, char decal)
{
    char **array;
    int size_y = my_iterchar(str, decal) + 1;

    array = malloc(sizeof(char *) * (size_y + 1));
    if (!array)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        array[cpt] = my_calloc(sizeof(char) * (2048), '\0');
        if (!array[cpt])
            return NULL;
    }
    array[size_y] = NULL;
    fill_up_array(str, array, decal);
    return array;
}