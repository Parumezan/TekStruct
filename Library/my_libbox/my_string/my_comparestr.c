/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_comparestr
*/

#include "my_libbox.h"

int my_comparestr(char *original, char *compare)
{
    int orilen = my_strlen(original);
    int comlen = my_strlen(compare);

    if (orilen != comlen)
        return 84;
    for (size_t cpt = 0; original[cpt] != '\0'; cpt++) {
        if (original[cpt] != compare[cpt])
            return 84;
    }
    return 0;
}