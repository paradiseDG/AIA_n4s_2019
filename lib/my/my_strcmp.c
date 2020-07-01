/*
** EPITECH PROJECT, 2019
** my_strcmp
** File description:
** kdaep
*/

#include <stdio.h>

int my_strlen(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i] != '\0')
        i++;
    return (i);
}

int my_strcmp(char *s1, char *s2)
{
    int i = 0;

    while ((s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0')) {
        i++;
    }
    return (s1[i] - s2[i]);
}

int pwd_strcmp(char *s1, char *s2)
{
    int i = 5;
    int y = 0;

    while (i != 0) {
        if (s1[y] != s2[y])
            return (1);
        y++;
        i--;
    }
    return (0);
}

int check_track_cleared(char *str)
{
    char sub[] = "Track Cleared";
    int i, j = 0, k;

    for (i = 0; str[i]; i++) {
        if (str[i] == sub[j]) {
            for (k = i, j = 0; str[k] && sub[j]; j++, k++)
                if (str[k] != sub[j])
                    break;
            if (!sub[j])
                return (0);
        }
    }
    return (-1);
}
