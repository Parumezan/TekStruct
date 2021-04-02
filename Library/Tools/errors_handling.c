/*
** EPITECH PROJECT, 2021
** MUL
** File description:
** errors_handling
*/

#include "tekstruct.h"

static int ac_verif(int ac)
{
    if (ac > 2) {
        my_putstr(": too many arguments.\n");
        return 84;
    }
    if (ac < 2) {
        my_putstr(": .\n");
        return 84;
    }
    return 0;
}

int errors_handling(int ac, char **av)
{
    int check = ac_verif(ac);

    if (check != 0)
        return 84;
    return 0;
}
