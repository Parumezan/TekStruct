/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_percent
*/

#include "my_libc.h"

int my_percent(int value, int total)
{
    int result = 0;

    result = value * 100;
    result = result / total;
    return result;
}