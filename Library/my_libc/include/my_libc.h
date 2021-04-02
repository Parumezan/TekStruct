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
    #include <unistd.h>
    #include <stdlib.h>
//Structures:
//Prototypes:
    //my_stdio
        void my_putchar(char c);
        void my_putnbr(int nb);
        void my_putstr(char *str);
        int my_strlen(char *str);
        int my_convert(char *str);
    //my_tools
        void my_putarray(char **array);

#endif /* !MY_LIBC_H_ */