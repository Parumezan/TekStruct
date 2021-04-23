/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_freearray
*/

#include "my_libbox.h"

void my_freearray(char **array)
{
    for (size_t cpt = 0; array[cpt] != NULL; cpt++)
        free(array[cpt]);
    free(array);
}