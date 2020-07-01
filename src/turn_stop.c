/*
** EPITECH PROJECT, 2020
** turn.c
** File description:
** turn.c
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int to_close_to_the_side_turn_right(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[0] < 150) {
        my_putstr("WHEELS_DIR:-0.5\n");
        getline(&str, &bufsize, stdin);
        while (global->array[0] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:-0.3\n");
        getline(&str, &bufsize, stdin);
    }
    to_close_to_the_side_turn_right_add(global);
    return (0);
}

int to_close_to_the_side_turn_left(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[0] < 150) {
        my_putstr("WHEELS_DIR:-0.3\n");
        getline(&str, &bufsize, stdin);
        while (global->array[0] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:0.3\n");
        getline(&str, &bufsize, stdin);
    }
    to_close_to_the_side_turn_left_add(global);
    return (0);
}

int to_close_to_the_side_straight(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    if (global->array[0] < 150) {
        my_putstr("WHEELS_DIR:-0.2\n");
        getline(&str, &bufsize, stdin);
        while (global->array[0] < 150) {
            my_putstr("GET_INFO_LIDAR\n");
            create_my_array(global);
        }
        my_putstr("WHEELS_DIR:0.0\n");
        getline(&str, &bufsize, stdin);
    }
    to_close_to_the_side_straight_add(global);
    return (0);
}

int stop_my_car(general_t *global)
{
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));
    int i = 0;

    while (i < 31) {
        if (global->array[i] > 2500)
            return (0);
        i++;
    }
    my_putstr("WHEELS_DIR:0.0\n");
    getline(&str, &bufsize, stdin);
    my_putstr("CAR_FORWARD:0.1\n");
    getline(&str, &bufsize, stdin);
    sleep(1);
    my_putstr("CAR_FORWARD:0.0\n");
    getline(&str, &bufsize, stdin);
    my_putstr("STOP_SIMULATION\n");
    getline(&str, &bufsize, stdin);
    return (0);
}