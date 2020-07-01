/*
** EPITECH PROJECT, 2019
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
#define MY_H_

#include <unistd.h>
#include <stdlib.h>

#ifndef STRUCT_NEED4STEK__
#define STRUCT_NEED4STEK__

typedef struct general_s
{
char **tab;
float *array;
}general_t;

#endif /*NEED_4_STEK__*/

//NEED4STEK FUNCTIONS ########################
int create_my_array(general_t *global);
char *clean_my_str(char *str);
int do_my_ai(general_t *global);
int create_my_float_array(general_t *global);
int stock_my_float_in_struct(general_t *global, float *tab);
int do_my_secondai(general_t *global);
int my_start_speed(general_t *global);
int stop_my_car(general_t *global);
int to_close_to_the_side_turn_right(general_t *global);
int to_close_to_the_side_turn_left(general_t *global);
int to_close_to_the_side_straight(general_t *global);
void to_close_to_the_side_turn_right_add(general_t *global);
void to_close_to_the_side_straight_add(general_t *global);
void to_close_to_the_side_turn_left_add(general_t *global);

//LIB_FUNCTIONS###############################
int check_track_cleared(char *str);
struct info_param *my_params_to_array(int ac, char **av);
char *my_strdup(char const *src);
char **my_str_to_word_array(char *str, char c);
void destroy_array(char **tab);
int my_atoi(char *str);
char *my_strclone(char *new, char *old);
char *my_strncpy(char *dest, char const *src, int n);
void my_puterror(char *errorstr);
int count_first_line(char *str);
char *my_strcat(char *dest, char *src);
void my_putchar(char c);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_put_nbr(int nb);
int my_strlen(char const *str);
int my_getnbr(char *str);
char *my_strcpy(char *dest, char const *src);
char *my_revstr(char *str);
int my_strcmp(char *s1, char *s2);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strncat(char *dest, char const *src, int nb);
char **my_str_to_wordtab(char *str);
int my_show_word_array(char * const *tab);
int my_printf(char *str, ...);
int my_puthexa(long long int nbr, char *base);
int my_putnbr_base(unsigned int nbr, char *base);
int my_put_unsigned_int(unsigned int nb);
char *my_strdup(char const *src);
char *read_file(char *filepath);
char **my_second_str_to_word_array(char *str);
int custom_env_strcmp(char *src, char *s2);
char *my_custom_strcpy(char *dest, char *src, int limit);

#endif /* MY_H_ */
