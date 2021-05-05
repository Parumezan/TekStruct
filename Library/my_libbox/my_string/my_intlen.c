/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_intlen
*/

#include "my_libbox.h"

int my_intlen(int *line, int limit_end)
{
    int cpt = 0;

    if (!line)
        return cpt;
    for (; line[cpt] != limit_end; cpt++);
    return cpt;
}