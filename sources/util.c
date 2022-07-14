/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** util.c
*/

#include <unistd.h>
#include "../include/push_swap.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}

int my_putstr(char const *str)
{
    for (int a = 0; str[a] != '\0'; a++)
        my_putchar(str[a]);
    return (0);
}

int m_gestion(long number)
{
    int tmp = 0;

    if (number >= 10) {
        tmp = number % 10;
        number = (number - tmp) / 10;
        m_gestion(number);
        my_putchar(tmp + '0');
    } else if (number < 10)
        my_putchar(number + '0');
    return (0);
}

int my_put_nbr(int nb)
{
    long number = nb;

    if (nb < 0) {
        my_putchar('-');
        number = number * -1;
        m_gestion(number);
    } else
        m_gestion(number);
    return (0);
}

int str_to_int(const char *str)
{
    int negative = 1;
    int i = 0;
    int number = 0;
    int result = 0;

    while (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
        i++;
    if (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
        negative *= -1;
        i++;
    }
    while (str[i] >= 48 && str[i] <= 57) {
        number = number * 10 + (str[i] - 48);
        i++;
    }
    result = number * negative;
    return (result);
}