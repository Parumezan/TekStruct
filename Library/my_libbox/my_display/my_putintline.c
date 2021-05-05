/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_putintline
*/

#include "my_libbox.h"

void my_putintline(int *line, int limit_end)
{
    for (size_t cpt = 0; line[cpt] != limit_end; cpt++)
        my_putnbr(line[cpt]);
}