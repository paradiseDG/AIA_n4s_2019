/*
** EPITECH PROJECT, 2020
** read.c
** File description:
** read.c
*/

#include "../../include/my.h"
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>

char *read_file(char *filepath)
{
    struct stat *statbuf = malloc(sizeof(struct stat) + 1);
    int fd = 0;
    long int size_file = 0;
    char *buf;

    if ((statbuf == NULL) || (stat(filepath, statbuf) == -1))
        return NULL;
    size_file = statbuf->st_size;
    buf = malloc(sizeof(char) * (size_file + 1));
    if (buf == NULL)
        return NULL;
    fd = open(filepath, O_RDONLY);
    if ((fd < 0) || (read(fd, buf, size_file) == -1))
        return NULL;
    buf[size_file] = '\0';
    return buf;
}
