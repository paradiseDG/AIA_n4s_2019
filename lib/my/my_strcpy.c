/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** cpy
*/

#include "../../include/my.h"

char *my_strcpy(char *dest, char const *src)
{
    int n = 0;

    while (src[n] != '\0') {
        dest[n] = src[n];
        n++;
    }
    dest[n] = '\0';
    return (dest);
}

char *my_custom_strcpy(char *dest, char *src, int limit)
{
    int i = 0;

    dest = malloc(sizeof(char) * (my_strlen(src) + 1));
    if (dest == NULL)
        return (NULL);
    while (i != limit) {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}
