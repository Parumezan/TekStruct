/*
** EPITECH PROJECT, 2020
** TekStruct
** File description:
** my_putstr
*/

#include "cerstruct.h"

void my_putstr(char *str)
{
    for (int cpt = 0; str[cpt] != '\0'; cpt++)
        write(1, &str[cpt], 1);
}