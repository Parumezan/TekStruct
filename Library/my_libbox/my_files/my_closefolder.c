/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_closefolder
*/

#include "my_libbox.h"

int my_closedir(DIR *folder)
{
    int check = closedir(folder);

    if (check != 0) {
        my_putstrerror("ERROR: Can't close the folder.\n");
        return 84;
    }
    return 0;
}