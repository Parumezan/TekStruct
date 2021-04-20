/*
** EPITECH PROJECT, 2020
** TekStruct
** File description:
** my_putchar
*/

#include "my_libbox.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}