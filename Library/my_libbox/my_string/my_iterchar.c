/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_iterchar
*/

#include "my_libbox.h"

int my_iterchar(char *str, char iter)
{
    int count = 0;

    for (size_t cpt = 0; str[cpt] != '\0'; cpt++) {
        if (str[cpt] == iter)
            count++;
    }
    return count;
}