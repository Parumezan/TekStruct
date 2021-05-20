/*
** EPITECH PROJECT, 2021
** TekStruct
** File description:
** my_libbox
*/

#ifndef MY_LIBBOX_H_
#define MY_LIBBOX_H_

//Defines:
    //Error:
//Includes:
    #include <sys/types.h>
    #include <sys/stat.h>
    #include <fcntl.h>
    #include <dirent.h>
    #include <unistd.h>
    #include <stdlib.h>
    #include <time.h>
//Structures:
//Prototypes:

    //-------------------------------------------------------------
    //my_array

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

        /// \brief Copy a char ** into a int ** |
        /// Be careful ; int **array memory == char **array memory |
        /// This function performs the ascii transformation
        /// \param array The int array you want to fill up
        /// \param original The char array you want to copy
        void my_fillintarray(int **array, char **original);

        /// \brief Copy an array into another array.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param array The array you gave to copy
        /// \return Return a malloc array with the 
        /// content of the array you gave
        char **my_arraycopy(char **original);

        /// \brief Copy an array into an int array.
        /// WARNING : Don't forget to free the returned 2D-Array | Don't
        /// forget to fill up this empty int array.
        /// \param array (char **) The array you gave to copy
        /// \param limit_n The limit / '\n' of an char **array
        /// \param limit_end The limit / '\0' of an char **array
        /// \return Return a malloc array with the 
        /// content of the array you gave
        int **my_arrintarray(char **original, int limit_n, int limit_end);

        /// \brief Copy an int array into another int array.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param original The array you gave to copy
        /// \param limit_n The '\n' of your original array
        /// \param limit_end The '\0' of your original array
        /// \return Return a malloc array with the 
        /// content of the array you gave
        int **my_intarraycopy(int **original, int limit_n, int limit_end);

        /// \brief Copy an char **array into another char **.
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param original The array you gave to copy
        /// \param str The '\n' of your original array
        /// \param nfree free manage (1 = array 2 = str 3 array & str)
        /// \return Return a malloc array with the 
        /// content of the str you gave
        char **my_concatarray(char **original, char *str, int nfree);

    //-------------------------------------------------------------
    //my_ctype

        /// \brief Tell you if your char is alpha
        /// \param c your char
        /// \return Return 1 if is it or 0 if not
        int my_isalpha(char c);

    //-------------------------------------------------------------
    //my_display

        /// \brief Displays the letter given as an argument.
        /// \param c The letter 
        void my_putchar(char c);

        /// \brief Displays the letter argument in the error output.
        /// \param c The letter
        void my_puterror(char c);

        /// \brief Displays the number given as an argument.
        /// \param nb The number
        void my_putnbr(int nb);

        /// \brief Displays the string given as an argument.
        /// \param str Your string
        void my_putstr(char *str);

        /// \brief Displays the int-string given as an argument.
        /// \param line Your int-string
        /// \param limit_end Your '\0' into an (int *)
        void my_putintline(int *line, int limit_end);

        /// \brief Displays the string argument in the error output.
        /// \param str Your string
        void my_putstrerror(char *str);

        /// \brief Displays your array given in arguments.
        /// \param array Your array.
        void my_putarray(char **array);

        /// \brief Displays your int array given in arguments.
        /// \param array Your int array
        /// \param limit_n The '\n' into a char array
        /// \param limit_end The '\0' into a char array
        void my_putintarray(int **array, int limit_n, int limit_end);

    //-------------------------------------------------------------
    //my_files

        /// \brief Read a file using stat.
        /// WARNING : Don't forget to free the returned string.
        /// \param filepath The filepath to the file to be read
        /// \return Return a malloc string with the content of the file.
        char *my_openread(char *filepath);

        /// \brief Open a folder using dirent
        /// WARNING : Don't forget to close the returned folder.
        /// \param filepath your folder filepath
        /// \return a DIR *folder for another functions.
        DIR *my_openfolder(char *folderpath);

        /// \brief Close a folder using dirent
        /// \param folder Your folder
        /// \return Return int 0 if successful, 84 if not.
        int my_closedir(DIR *folder);

        /// \brief Opens a folder as an argument, and gets all the file names,
        /// and puts them in an array
        /// WARNING : Don't forget to free the returned 2D-Array.
        /// \param folderpath Your folder path
        /// \return Return a malloc array with the content of namesfiles
        /// in your folder.
        char **my_filesarray(char *filepath);

    //-------------------------------------------------------------
    //my_maths

        /// \brief Return the number of a percent.
        /// \param value Your first value
        /// \param total The total
        /// \return (int) Your percentage
        int my_percent(int value, int total);

        /// \brief Return a random number between lower / upper value.
        /// \param lower Your lower value
        /// \param upper Your upper value
        /// \return (int) Your random number
        int my_randomnb(int lower, int upper);

        /// \brief Upgrade of the inttostr for size_t number.
        /// \param lower Your lower value
        /// \param size Size of your number (1234 = size of 4 int)
        /// \param limit_end Your '\0' into a string
        /// \return (int *) Your number into a int *
        int *my_xmodulo(size_t nb, int size, int limit_end);

    //-------------------------------------------------------------
    //my_memory

        /// \brief Malloc a certain size and initialize it with 
        /// the letter given as argument.
        /// WARNING : Don't forget to free the returned malloc pointer.
        /// \param size The size you gave
        /// \param fill The initialize letter
        /// \return Returns a malloc initialized by the 
        /// letter given as argument
        void *my_calloc(size_t size, char fill);

        /// \brief Free an array you gave.
        /// \param array (char **) Your array
        void my_freearray(char **array);

        /// \brief Free an int array you gave.
        /// \param array (int **) Your array
        /// \param limit_end The "null" into a char **
        void my_freeintarray(int **array, int limit_end);

    //-------------------------------------------------------------
    //my_string

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

        /// \brief Copy the string you gave in argument.
        /// WARNING : Don't forget to free the returned string.
        /// \param str Your string you gave
        /// \param free If you want to free "str", type 1
        /// \return (char *) Your string copy
        char *my_strcpy(char *str, int needfree);

        /// \brief Return the lenght of your string given as an argument.
        /// \param str Your string
        /// \return The length of the string
        int my_strlen(char *str);

        /// \brief Return the lenght of your int string given as an argument.
        /// \param line Your string
        /// \param limit_end The '\0' of your string
        /// \return The length of the int string
        int my_intlen(int *line, int limit_end);

        /// \brief Copy the string you want into another string.
        /// WARNING : Don't forget to free the returned string.
        /// \param original Original string you gave
        /// \param add Your string you gave to add
        /// \param nfree free string (1 original / 2 add / 3 both)
        /// \return (char *) Your entire string
        char *my_concatstring(char *original, char *add, int nfree);

        /// \brief Compare two string you gave in arguments.
        /// \param original Original string you gave
        /// \param compare Your string to compare
        /// \return Return int 0 if successful, 84 if not.
        int my_comparestr(char *original, char *compare);

        /// \brief Copy the int * string you gave in argument.
        /// WARNING : Don't forget to free the returned string.
        /// \param original Your string you gave
        /// \param limit_end The '\0' of your string
        /// \param nfree enter '1' if you want to free the "original"
        /// \return (int *) Your int-string copy
        int *my_intcpy(int *original, int limit_end, int nfree);

    //-------------------------------------------------------------
    //my_tools

        /// \brief Return the number of in a string (ascii conversion) 
        /// given as an argument.
        /// \param str Your string - number
        /// \return (int) Your number
        int my_convert(char *str);

        /// \brief Return the number into a string (ascii conversion) 
        /// given as an argument.
        /// WARNING : Don't forget to free the returned string.
        /// \param nb Your number
        /// \return (char *) Your str - number
        char *my_inttostr(int nb);

#endif /* !MY_LIBBOX_H_ */