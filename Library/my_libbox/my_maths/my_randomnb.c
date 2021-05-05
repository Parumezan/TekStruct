/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** don't forget "srand(time(0));"
*/

#include "my_libbox.h"

int my_randomnb(int lower, int upper)
{
    int count = 0;

    if (lower > upper)
        return count;
    count = (rand() % (upper - lower + 1));
    count += lower;
    return count;
}