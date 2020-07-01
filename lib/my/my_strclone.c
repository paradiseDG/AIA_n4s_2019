/*
** EPITECH PROJECT, 2020
** lib
** File description:
** tetris
*/

#include "../../include/my.h"

char *my_strclone(char *new, char *old)
{
    new = malloc(sizeof(char) * (my_strlen(old) + 1));
    new = my_strcpy(new, old);
    return (new);
}
