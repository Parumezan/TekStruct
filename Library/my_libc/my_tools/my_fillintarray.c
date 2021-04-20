/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_fillintarray
*/

#include "my_libc.h"

void my_fillintarray(int **array, int fillup, int limit_n, int limit_end)
{
    for (size_t leny = 0; array[leny][0] != limit_end; leny++) {
        for (size_t lenx = 0; array[leny][lenx] != limit_n; lenx++)
            array[leny][lenx] = fillup;
    }
}