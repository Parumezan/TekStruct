/*
** EPITECH PROJECT, 2020
** CerStruct
** File description:
** my_putstr
*/

#include "cerstruct.h"

void my_putstr(char *str)
{
    int count = 0;

    while (str[count] != '\0') {
        my_putchar(str[count]);
        count++;
    }
}