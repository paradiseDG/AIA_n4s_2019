/*
** EPITECH PROJECT, 2020
** destroy_tab.c
** File description:
** destroy_tab
*/

#include <stdlib.h>

void destroy_array(char **tab)
{
    int i = 0;

    while (tab[i] != NULL) {
        free(tab[i]);
        i++;
    }
    free(tab);
}
