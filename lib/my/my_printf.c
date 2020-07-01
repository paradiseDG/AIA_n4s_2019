/*
** EPITECH PROJECT, 2019
** my_printf
** File description:
** my_printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../../include/my.h"

int second_flags(char *str, va_list ap, int i)
{
    switch (str[i + 1]) {
    case 'i':
        my_put_nbr(va_arg(ap, int));
        break;
    }
    return (i);
}

int third_flags(char *str, va_list ap, int i)
{
    switch (str[i + 1]) {
    case '%':
        my_putchar('%');
        break;
    }
    return (i);
}

int last_flags(char *str, va_list ap, int i)
{
    if (str[i] == '%') {
    switch (str[i + 1]) {
        case 'c':
            my_putchar(va_arg(ap, int));
            break;
        case 's':
            my_putstr(va_arg(ap, char *));
            break;
        case 'd':
            my_put_nbr(va_arg(ap, int));
            break;
        }
        second_flags(str, ap, i);
        third_flags(str, ap, i);
        return (1);
    }
    else
        return (0);
}

int my_printf(char *str, ...)
{
    va_list ap;
    int i = 0;
    int last = 0;

    va_start(ap, str);
    while (str[i] != '\0') {
        last = last_flags(str, ap, i);
        if (last == 1)
            i++;
        if (last == 0)
            my_putchar(str[i]);
        i++;
    }
    va_end(ap);
    return (0);
}
