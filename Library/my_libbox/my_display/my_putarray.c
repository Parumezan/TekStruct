/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_putarray
*/

#include "my_libbox.h"

void my_putarray(char **array)
{
    for (int leny = 0; array[leny] != NULL; leny++) {
        write(1, array[leny], my_strlen(array[leny]));
        write(1, "\n", 1);
    }
}