/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_openread
*/

#include "my_libbox.h"

static int readfile(int fd, char *str, struct stat s)
{
    int check = 0;

    check = read(fd, str, s.st_size);
    if (check == -1 || s.st_size == 0) {
        my_putstrerror("ERROR: The file is empty.\n");
        return 84;
    }
    return 0;
}

char *my_openread(char *filepath)
{
    int fd;
    char *str = 0;
    struct stat s;

    fd = open(filepath, O_RDONLY);
    if (fd == -1) {
        my_putstrerror("ERROR: The file won't open.\n");
        return NULL;
    }
    stat(filepath, &s);
    if (!(str = malloc(sizeof(char) * (s.st_size + 1))))
        return NULL;
    str[s.st_size] = '\0';
    fd = readfile(fd, str, s);
    if (fd != 0)
        return NULL;
    if ((fd = close(fd)))
        return NULL;
    return str;
}