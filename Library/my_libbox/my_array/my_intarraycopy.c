/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_intarraycopy
*/

#include "my_libbox.h"

static void fill_up_array(int **copy, int **original, int limit_n,
int limit_end)
{
    for (size_t leny = 0; original[leny][0] != limit_end; leny++) {
        for (size_t lenx = 0; original[leny][lenx] != limit_n; lenx++)
            copy[leny][lenx] = original[leny][lenx];
    }
}

static int **end_array(int **copy, int **original, int size_y,
int limit_end)
{
    copy[size_y] = malloc(sizeof(int) * 1);
    if (!copy[size_y])
        return NULL;
    copy[size_y][0] = limit_end;
    return copy;
}

int **my_intarraycopy(int **original, int limit_n, int limit_end)
{
    int **copy = NULL;
    int size_x = 0;
    int size_y = 0;

    for (; original[size_y][0] != limit_end; size_y++);
    copy = malloc(sizeof(int *) * (size_y + 1));
    if (!copy)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        size_x = my_intlen(original[cpt], limit_n);
        copy[cpt] = malloc(sizeof(int) * (size_x + 1));
        if (!copy[cpt])
            return NULL;
        copy[cpt][size_x] = limit_n;
    }
    fill_up_array(copy, original, limit_n, limit_end);
    copy = end_array(copy, original, size_y, limit_end);
    if (!copy)
        return NULL;
    return copy;
}