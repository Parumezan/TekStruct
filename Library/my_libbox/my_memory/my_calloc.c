/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_calloc
*/

#include "my_libbox.h"

void *my_calloc(size_t size, char fill)
{
    char *ptn;

    ptn = malloc(size);
    if (!ptn)
        return NULL;
    for (size_t cpt = 0; cpt < size; cpt++)
        ptn[cpt] = fill;
    return ptn;
}