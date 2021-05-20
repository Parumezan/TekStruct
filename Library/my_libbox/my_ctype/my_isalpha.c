/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_isalpha
*/

#include "my_libbox.h"

int my_isalpha(char c)
{
    int pastille = 0;

    if (c >= 65 && c <= 90)
        pastille = 1;
    if (c >= 97 && c <= 122)
        pastille = 1;
    return pastille;
}