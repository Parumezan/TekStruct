/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_lensdecal
*/

#include "tekstruct.h"

int my_lensdecal(char *str, char decal)
{
    int count = 1;
    int check = 0;

    for (size_t cpt = 0; str[cpt] != '\0'; cpt++) {
        if (str[cpt] == decal) {
            if (count > check)
                check = count;
            count = 1;
            cpt++;
        }
        count++;
    }
    if (count > check)
        check = count;
    return check; 
}