/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_libc
*/

#ifndef MY_LIBC_H_
#define MY_LIBC_H_

//Defines:
    //Error:
//Includes:
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <unistd.h>
    #include <stdlib.h>
//Structures:
//Prototypes:
    //my_stdlib
        void *my_calloc(size_t size, char fill);
    //my_stdio
        void my_putchar(char c);
        void my_putnbr(int nb);
        void my_putstr(char *str);
        int my_strlen(char *str);
        int my_convert(char *str);
    //my_tools
        void my_putarray(char **array);
        char *my_openread(char *filepath);
        int my_iterchar(char *str, char iter);
        char **my_strarray(char *str, char decal);

#endif /* !MY_LIBC_H_ */