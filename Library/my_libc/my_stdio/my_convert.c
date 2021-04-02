/*
** EPITECH PROJECT, 2020
** TekStruct
** File description:
** my_convert
*/

int my_convert(char *str)
{
    int nb = 0;
    int count = 0;
    int signe = 1;

    if (str[count] == '-') {
        signe = -1;
        count++;
    }
    if (str[count] == '+')
        count++;
    while ((str[count] >= '0') && (str[count] <= '9')) {
        nb = (nb * 10) + (str[count] - '0');
        count++;
    }
    nb *= signe;

    return nb;
}