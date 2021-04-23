/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_putstrerror
*/

#include "my_libbox.h"

void my_putstrerror(char *str)
{
    write(2, str, my_strlen(str));
}