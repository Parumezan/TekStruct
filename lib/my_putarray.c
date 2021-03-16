/*
** EPITECH PROJECT, 2021
** CerStruct
** File description:
** my_putarray
*/

#include "cerstruct.h"

void my_putarray(char **array)
{
    for (int leny = 0; array[leny] != NULL; leny++) {
        for (int lenx = 0; array[leny][lenx] != '\0'; lenx++) {
            write(1, &array[leny][lenx], 1);
        }
        write(1, "\n", 1);
    }
}