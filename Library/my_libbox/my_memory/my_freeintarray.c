/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_freeintarray
*/

#include "my_libbox.h"

void my_freeintarray(int **array, int limit_end)
{
    size_t cpt = 0;

    if (array != NULL) {
        for (; array[cpt][0] != limit_end; cpt++)
            free(array[cpt]);
        free(array[cpt++]);
        free(array);
    }
}