/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_intcpy
*/

#include "my_libbox.h"

int *my_intcpy(int *original, int limit_end, int nfree)
{
    int *copy = NULL;
    int cpt = 0;

    for (; original[cpt] != limit_end; cpt++);
    copy = malloc(sizeof(int) * (cpt + 1));
    for (size_t count = 0; count < cpt; count++)
        copy[count] = original[count];
    copy[cpt] = limit_end;
    if (nfree == 1)
        free(original);
    return copy;
}
