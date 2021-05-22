/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_isnumber
*/

#include "my_libbox.h"

int my_isnumber(char c)
{
    int pastille = 0;

    if (c >= 48 && c <= 57)
        pastille = 1;
    return pastille;
}