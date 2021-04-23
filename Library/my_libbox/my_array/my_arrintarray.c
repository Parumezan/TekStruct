/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_intarray
*/

#include "my_libbox.h"

int **my_arrintarray(char **original, int limit_n, int limit_end)
{
    int **array;
    int size_y = 0;
    int size_x = my_strlen(original[0]);

    for (; original[size_y] != NULL; size_y++);
    array = malloc(sizeof(int *) * (size_y + 1));
    if (!array)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        array[cpt] = malloc(sizeof(int) * (size_x + 1));
        if (!array[cpt])
            return NULL;
        array[cpt][size_x] = limit_n;
    }
    array[size_y] = malloc(sizeof(int) * 1);
    if (!array[size_y])
        return NULL;
    array[size_y][0] = limit_end;
    return array;
}