/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_inttostr
*/

#include "my_libbox.h"

static char *fill_intstr(int cpt, int save, int pastille)
{
    char *str = my_calloc((sizeof(char) * (cpt + 2)), 0);

    if (!str)
        return NULL;
    for (; cpt > -1; cpt--) {
        str[cpt] = ((save % 10) + 48);
        save /= 10;
    }
    if (pastille == 1)
        str[0] = '-';
    return str;
}

char *my_inttostr(int nb)
{
    int save = nb;
    int pastille = 0;
    int cpt = 0;

    if (nb < 0) {
        save *= -1;
        pastille = 1;
    }
    for (; save > 0; save /= 10, cpt++);
    cpt--;
    save = nb;
    if (pastille == 1) {
        cpt += 1;
        save = nb * -1;
    }
    return fill_intstr(cpt, save, pastille);
}