/*
** EPITECH PROJECT, 2020
** main
** File description:
** ia
*/

#include "my.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    general_t *global = malloc(sizeof(general_t));
    size_t bufsize = 32;
    char *str = (char *)malloc(bufsize * sizeof(char));

    my_putstr("START_SIMULATION\n");
    getline(&str, &bufsize, stdin);
    my_putstr("CAR_FORWARD:0.5\n");
    getline(&str, &bufsize, stdin);
    while (1) {
        my_putstr("GET_INFO_LIDAR\n");
        if (create_my_array(global) == 84)
            return (84);
        do_my_ai(global);
        to_close_to_the_side_straight(global);
    }
    return (0);
}