/*
** EPITECH PROJECT, 2020
** my_puterror.c
** File description:
** my_puterror.c
*/

#include "../../include/my.h"

void my_puterror(char *errorstr)
{
    write(2, errorstr, my_strlen(errorstr));
}