/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_openwrite
*/

#include "my_libbox.h"

static int file_create(int fd, char *str, char *filename, char *filepath)
{
    fd = open(filename, O_CREAT | O_RDWR, S_IRUSR | S_IWUSR |
    S_IRGRP | S_IWGRP | S_IROTH | S_IWOTH);
    if (fd == -1) {
        my_putstrerror("ERROR: The file cannot be created.\n");
        free(filepath);
        return 84;
    }
    if (write(fd, str, my_strlen(str)) == -1) {
        my_putstrerror("ERROR: Can't write on the file.\n");
        free(filepath);
        return 84;
    }
    free(filepath);
    close(fd);
    return 0;
}

static int file_exist(int fd, char *str, char *filepath)
{
    if (write(fd, str, my_strlen(str)) == -1) {
        my_putstrerror("ERROR: Can't write on the file, exist file.\n");
        free(filepath);
        return 84;
    }
    free(filepath);
    close(fd);
    return 0;
}

int my_openwrite(char *filename, char *str)
{
    int fd = 0;
    char *filepath = my_concatstring("./", filename, 0);

    if (!filepath)
        return 84;
    if (!filename || my_strlen(filename) == 0) {
        free(filepath);
        return 84;
    }
    fd = open(filepath, O_RDWR);
    if (fd == -1) {
        if (file_create(fd, str, filename, filepath) != 0)
            return 84;
    } else {
        if (file_exist(fd, str, filepath) != 0)
            return 84;
    }
    return 0;
}