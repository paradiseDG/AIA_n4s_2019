/*
** EPITECH PROJECT, 2020
** turn_loop.c
** File description:
** turn_loop.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void to_close_to_the_side_turn_right_add(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[31] < 150) {
        my_putstr("WHEELS_DIR:0.6\n");
        getline(&str, &bufsize, stdin);
        while (global->array[31] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:-0.3\n");
        getline(&str, &bufsize, stdin);
    }
}

void to_close_to_the_side_turn_left_add(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[31] < 150) {
        my_putstr("WHEELS_DIR:0.5\n");
        getline(&str, &bufsize, stdin);
        while (global->array[0] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:0.3\n");
        getline(&str, &bufsize, stdin);
    }
}

void to_close_to_the_side_straight_add(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[31] < 150) {
        my_putstr("WHEELS_DIR:0.2\n");
        getline(&str, &bufsize, stdin);
        while (global->array[0] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:0.0\n");
        getline(&str, &bufsize, stdin);
    }
}