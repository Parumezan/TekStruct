/*
** EPITECH PROJECT, 2020
** TekStruct
** File description:
** my_putchar
*/

#include "tekstruct.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}