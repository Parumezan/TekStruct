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

    //-------------------------------------------------------------
    //my_stdlib

        /// \brief Malloc a certain size and initialize it with 
        /// the letter given as argument.
        /// WARNING : Don't forget to free the returned malloc pointer.
        /// \param size The size you gave
        /// \param fill The initialize letter
        /// \return Returns a malloc initialized by the 
        /// letter given as argument
        void *my_calloc(size_t size, char fill);

    //-------------------------------------------------------------
    //my_stdio

        /// \brief Displays the letter given as an argument.
        /// \param c The letter 
        void my_putchar(char c);

        /// \brief Displays the number given as an argument.
        /// \param nb The number
        void my_putnbr(int nb);
        
        /// \brief Displays the string given as an argument.
        /// \param str Your string
        void my_putstr(char *str);
        
        /// \brief Return the lenght of your string given as an argument.
        /// \param str Your string
        /// \return The length of the string
        int my_strlen(char *str);

    //-------------------------------------------------------------
    //my_string

        /// \brief Copy the string you gave in argument.
        /// \param str Your string you gave
        /// \return (char *) Your string copy
        char *my_strcpy(char *str);

    //-------------------------------------------------------------
    //my_tools

        /// \brief Return the number of a percent.
        /// \param value Your first value
        /// \param total The total
        /// \return (int) Your percentage
        int my_percent(int value, int total);

        /// \brief Return the number of in a string (ascii conversion) 
        /// given as an argument.
        /// \param str Your string - number
        /// \return (int) Your number
        int my_convert(char *str);

        /// \brief Displays your array given in arguments.
        /// \param array Your array.
        void my_putarray(char **array);

        /// \brief Read a file using stat.
        /// WARNING : Don't forget to free the returned string.
        /// \param filepath The filepath to the file to be read
        /// \return Return a malloc string with the content of the file
        char *my_openread(char *filepath);
        
        /// \brief Look at the iteration of a letter given 
        /// as an argument in a string. 
        /// \param str Your string
        /// \param iter (char) Your delimiter / letter
        /// \return {nb} - Number of the iteration
        int my_iterchar(char *str, char iter);

        /// \brief Size of the largest string delimited 
        /// by a delimiter in youre string.
        /// \param str Your string
        /// \param decal (char) Your delimiter
        /// \return {nb} - len of the largest string
        int my_lenintostr(char *str, char decal);

        /// \brief Takes a string and with a separator letter, 
        /// makes it a malloc array.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param str The string you gave so that it becomes an array
        /// \param decal The letter to separate your string
        /// \return Return a malloc array with the content of the string
        char **my_strarray(char *str, char decal);

        /// \brief Fill an array with a str, with a break element.
        /// \param str The string you gave so that it becomes an array
        /// \param array The array you gave to fill in
        /// \param decal The letter to separate your string into an array
        void my_fillstrarray(char *str, char **array, char decal);

        /// \brief Copy an array into another array.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param array The array you gave to copy
        /// \return Return a malloc array with the 
        /// content of the array you gave
        char **my_arraycopy(char **original);

        /// \brief Copy an array into another array.
        /// \param array The array you gave to copy
        /// \return Return a malloc array with the 
        /// content of the array you gave
        void my_fillintarray(int **array, int fillup, int limit_n, int limit_end);
        
        /// \brief Copy an array into an int array.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param array (char **) The array you gave to copy
        /// \param limit_n The limit / '\n' of an char **array
        /// \param limit_end The limit / '\0' of an char **array
        /// \return Return a malloc array with the 
        /// content of the array you gave
        int **my_arrintarray(char **original, int limit_n, int limit_end);

#endif /* !MY_LIBC_H_ */