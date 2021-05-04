/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_fillintarray
*/

#include "my_libbox.h"

void my_fillintarray(int **array, char **original)
{
    for (size_t leny = 0; original[leny] != NULL; leny++) {
        for (size_t lenx = 0; original[leny][lenx] != '\0'; lenx++)
            array[leny][lenx] = original[leny][lenx] - 48;
    }
}