/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_fillstrarray
*/

#include "my_libbox.h"

void my_fillstrarray(char *str, char **array, char decal)
{
    int nby = 0;
    int nbx = 0;

    for (size_t cpt = 0; str[cpt] != '\0'; cpt++) {
        if (str[cpt] == decal) {
            nby++;
            cpt++;
            nbx = 0;
        }
        array[nby][nbx] = str[cpt];
        nbx++;
    }
}