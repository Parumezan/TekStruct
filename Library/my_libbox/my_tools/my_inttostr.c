/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_inttostr
*/

#include "my_libbox.h"

char *my_inttostr(int nb)
{
    int cpt = 0;
    int save = nb;
    int size = 0;
    int check = 0;
    char *str = NULL;
    
    if (nb < 0) {
        save *= -1;
        size = 1;
    }
    for (int check = save; check > 0; check /= 10, cpt++);
    size += cpt;
    if (!(str = my_calloc(sizeof(char) * (size + 1), 0)))
        return NULL;
    if (size > cpt)
        check += 1;
    for (check += cpt - 1; check >= 0; check--, save /= 10)
        str[check] = ((save % 10) + 48);
    size > cpt ? str[0] = '-' : 0;
    return str;
}