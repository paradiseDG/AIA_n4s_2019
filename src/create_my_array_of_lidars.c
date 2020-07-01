/*
** EPITECH PROJECT, 2020
** create_my_array_of_lidars.c
** File description:
** create_my_array_of_lidars.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

char *clean_my_str(char *str)
{
    char *cleaned_string = malloc(sizeof(char) * 230);
    int i = 22;
    int e = 0;

    while ((str[i + 1] < 'A' || str[i + 1] > 'z')) {
        cleaned_string[e] = str[i];
        i++;
        e++;
    }
    cleaned_string[e] = '\0';
    return (cleaned_string);
}

int create_my_array(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));
    if (getline(&str, &bufsize, stdin) == -1)
        return (84);
    if (my_strlen(str) < 90)
        return (84);
    if (check_track_cleared(str) == 0){
        stop_my_car(global);
        return (0);
    }
    str = clean_my_str(str);
    global->tab = my_str_to_word_array(str, ':');
    create_my_float_array(global);
    return (0);
}

int create_my_float_array(general_t *global)
{
    int i = 0;
    global->array = malloc(sizeof(float) * 32);

    while (i <= 31) {
        global->array[i] = atof(global->tab[i]);
        i++;
    }
    return (0);
}
