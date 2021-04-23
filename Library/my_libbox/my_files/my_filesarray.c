/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_filesarray
*/

#include "my_libbox.h"

static int check_name(struct dirent *buffer)
{
    int check = 0;

    check = my_comparestr(buffer->d_name, ".");
    if (check == 0)
        return 84;
    check = my_comparestr(buffer->d_name, "..");
    if (check == 0)
        return 84;
    return 0;
}

static int size_second_part(DIR *folder)
{
    int check = 0;
    int result = 0;
    struct dirent *buffer = readdir(folder);

    if (!buffer) {
        my_putstrerror("ERROR: There is no files in this folder.\n");
        return -1;
    }
    for (; buffer != NULL; buffer = readdir(folder)) {
        check = check_name(buffer);
        if (check == 0)
            result++;
        check = 0;
    }
    return result;
}

static int size_y(char *filepath)
{
    int check = 0;
    int lensize = 0;
    DIR *folder = my_openfolder(filepath);

    if (!folder)
        return -1;
    lensize = size_second_part(folder);
    if (lensize == -1)
        return -1;
    check = my_closedir(folder);
    if (check != 0)
        return -1;
    return lensize;
}

static char **arrayfound(DIR *folder, int size_y)
{
    size_t count = 0;
    char **array;
    struct dirent *buffer;

    array = malloc(sizeof(char *) * (size_y + 1));
    if (!array)
        return NULL;
    for (size_t cpt = 0; cpt < (size_t)size_y; cpt++) {
        buffer = readdir(folder);
        if (check_name(buffer) == 0) {
            if (!buffer)
                return NULL;
            array[count] = my_strcpy(buffer->d_name);
            if (!array[count])
                return NULL;
            count++;
        }
    }
    array[count] = NULL;
    return array;
}

char **my_filesarray(char *filepath)
{
    int check = 0;
    int lensize = 0;
    char **array = NULL;
    DIR *folder;

    if (!filepath)
        return NULL;
    lensize = size_y(filepath);
    if (lensize == -1)
        return NULL;
    folder = my_openfolder(filepath);
    if (!folder)
        return NULL;
    array = arrayfound(folder, lensize);
    if (!array)
        return NULL;
    check = my_closedir(folder);
    if (check != 0)
        return NULL;
    return array;
}