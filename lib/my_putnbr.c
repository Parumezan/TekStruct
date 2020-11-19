/*
** EPITECH PROJECT
** CerStruct
** File description:
** my_putnbr
*/

#include "cerstruct.h"

void my_putnbr(int nb)
{
    int check = 1;

    if (nb < 0) {
        my_putchar('-');
        nb *= -1;
    }
    while ((nb / check) > 9) {
        check *= 10;
    }
    while (check != 0) {
        my_putchar('0' + (nb / check % 10));
        check /= 10;
    }
}