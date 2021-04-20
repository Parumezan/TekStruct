/*
** EPITECH PROJECT, 2020
** TekStruct
** File description:
** my_putstr
*/

#include "my_libbox.h"

void my_putstr(char *str)
{
    write(1, str, my_strlen(str));
}