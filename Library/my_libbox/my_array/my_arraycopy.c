/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_arraycopy
*/

#include "my_libbox.h"

char **my_arraycopy(char **original)
{
    char **copy;
    int size_y = 0;

    for (; original[size_y] != NULL; size_y++);
    copy = malloc(sizeof(char *) * (size_y + 1));
    if (!copy)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        copy[cpt] = my_calloc(sizeof(char) *
        (my_strlen(original[cpt]) + 1), '\0');
        if (!copy[cpt])
            return NULL;
    }
    copy[size_y] = NULL;
    for (size_t leny = 0; original[leny] != NULL; leny++) {
        for (size_t lenx = 0; original[leny][lenx] != '\0'; lenx++)
            copy[leny][lenx] = original[leny][lenx];
    }
    return copy;
}