/*
** EPITECH PROJECT, 2019
** my_getnbr
** File description:
** getnbr
*/

#include <stddef.h>

int my_put_nbr(int nb);

int my_getnbr(char *str)
{
    int neg = 1;
    int nbr = 0;
    int i = 0;

    if (str == NULL)
        return (-1);
    while (((str[i] == '-') || (str[i] == '+'))
    && (str[i] != '\0')) {
        if (str[i++] == '-')
            neg *= -1;
    }
    while (str[i] != '\0') {
        if ((str[i] <= '9') && (str[i] >= '0')) {
            nbr *= 10;
            nbr += str[i] - '0';
        }
        i++;
    }
    nbr *= (neg == -1) ? -1 : 1;
    return (nbr);
}
