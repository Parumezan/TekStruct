/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_concatarray
*/

#include "my_libbox.h"

static char *lastmanage(char **copy, char *str, int nfree)
{
    if (nfree == 1 || nfree == 3)
        my_freearray(copy);
    str = my_strcpy(str, 0);
    if (nfree == 2 || nfree == 3)
        free(str);
    return str;
}

char **my_concatarray(char **original, char *str, int nfree)
{
    char **copy;
    int size_y = 0;

    for (; original[size_y] != NULL; size_y++);
    copy = malloc(sizeof(char *) * (size_y + 2));
    if (!copy)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        copy[cpt] = my_calloc(sizeof(char) *
        (my_strlen(original[cpt]) + 1), '\0');
        if (!copy[cpt])
            return NULL;
    }
    copy[size_y + 1] = NULL;
    for (size_t leny = 0; original[leny] != NULL; leny++) {
        for (size_t lenx = 0; original[leny][lenx] != '\0'; lenx++)
            copy[leny][lenx] = original[leny][lenx];
    }
    copy[size_y] = lastmanage(original, str, nfree);
    return copy;
}