/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_puterror
*/

#include "my_libbox.h"

void my_puterror(char c)
{
    write(2, &c, 1);
}