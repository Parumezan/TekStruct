/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_randomnb
*/

#include "my_libbox.h"

int my_randomnb(int lower, int upper)
{
    int count = 0;

    srand(time(0));
    count = (rand() % (upper - lower + 1));
    count += lower;
    return (count);
}