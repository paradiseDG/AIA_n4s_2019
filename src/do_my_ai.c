/*
** EPITECH PROJECT, 2020
** do_my_ai.c
** File description:
** do_my_ai.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int turn_or_stop(general_t *global)
{
    int i = 0;

    i = (global->array[0] + global->array[4] + global->array[8]
    + global->array[12]) - (global->array[19] + global->array[23]
    + global->array[27] + global->array[31]);
    if (i < 0)
        return (1);
    return (0);
}

int turn_left(general_t *global)
{ 
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));
    my_putstr("WHEELS_DIR:0.3\n");
    getline(&str, &bufsize, stdin);
    while (global->array[16] < 800){
        my_putstr("GET_INFO_LIDAR\n");
        create_my_array(global);
        to_close_to_the_side_turn_left(global);
    }
    my_putstr("WHEELS_DIR:0.0\n");
    getline(&str, &bufsize, stdin);
    my_putstr("CAR_FORWARD:0.4\n");
    getline(&str, &bufsize, stdin);
    return (0);
}

int turn_right(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));
    my_putstr("WHEELS_DIR:-0.3\n");
    getline(&str, &bufsize, stdin);
    while (global->array[16] < 800){
        my_putstr("GET_INFO_LIDAR\n");
        create_my_array(global);
        to_close_to_the_side_turn_right(global);
    }
    my_putstr("WHEELS_DIR:0.0\n");
    getline(&str, &bufsize, stdin);
    my_putstr("CAR_FORWARD:0.4\n");
    getline(&str, &bufsize, stdin);
    return (0);
}

int turn_my_car(general_t *global)
{
    if (turn_or_stop(global) == 1) {
        turn_right(global);
    }
    else {
        turn_left(global);
    }
    return (0);
}

int do_my_ai(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));
    if (global->array != NULL) {
        if (global->array[16] < 800) {
            my_putstr("CAR_FORWARD:0.15\n");
            getline(&str, &bufsize, stdin);
            turn_my_car(global);
        }
    }
    return (0);
}