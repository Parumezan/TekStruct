/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_putintarray
*/

#include "my_libbox.h"

void my_putintarray(int **array, int limit_n, int limit_end)
{
    for (size_t leny = 0; array[leny][0] != limit_end; leny++) {
        for (size_t lenx = 0; array[leny][lenx] != limit_n; lenx++)
            my_putnbr(array[leny][lenx]);
        write(1, "\n", 1);
    }
}