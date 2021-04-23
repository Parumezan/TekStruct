/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_openfolder
*/

#include "my_libbox.h"

DIR *my_openfolder(char *folderpath)
{
    DIR *folder;

    folder = opendir(folderpath);
    if (!folder) {
        my_putstrerror("ERROR: There is no folder ");
        my_putstrerror(folderpath);
        my_puterror('\n');
        return NULL;
    }
    return folder;
}