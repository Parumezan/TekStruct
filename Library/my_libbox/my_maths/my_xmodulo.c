/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_xmodulo
*/

#include "my_libbox.h"

int *my_xmodulo(size_t nb, int size, int limit_end)
{
    int *line = malloc(sizeof(int) * (size + 1));
    size_t count = 0;
    size_t divis = 1;

    if (!line)
        return NULL;
    for (size_t cpt = size; cpt > 0; cpt--, divis *= 10) {
        line[cpt] = count;
        count = nb / divis;
        count = count % 10;
    }
    line[0] = count;
    line[size] = limit_end;
    return line;
}