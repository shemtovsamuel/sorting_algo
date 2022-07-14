/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** map_to_int.c
*/

#include <unistd.h>
#include <stdlib.h>
#include "../include/push_swap.h"

int check(int ac, char **av)
{
    int result = 0;

    for (int i = 1; i < ac - 1; i++)
        if (str_to_int(av[i]) > str_to_int(av[i + 1]))
            result += 1;
    return (result);
}

void sort(int **list, int *size_la, int *size_lb, int nb)
{
    for (int i = 0; i < nb; i++) {
        if (list[0][0] > list[0][1]) {
            sa(list[0], size_la);
            my_putstr("sa ");
        }
        pb(list[0], size_la, list[1], size_lb);
        my_putstr("pb ");
    }
    for (int i = 0; i < nb - 1; i++) {
        pa(list[0], size_la, list[1], size_lb);
        my_putstr("pa ");
    }
    pa(list[0], size_la, list[1], size_lb);
    my_putstr("pa");
}

void algo(int **list, int *size_la, int *size_lb, int nb)
{
    for ( int h = 0; h < nb; h++) {
        sort(list, size_la, size_lb, nb);
        if (h != nb - 1)
            my_putchar(' ');
    }
    my_putchar('\n');
}

int main(int ac, char **av)
{
    int **list = malloc(sizeof(int *) * (2));
    int size_la = ac - 1;
    int size_lb = 0;
    int nb = ac - 1;

    list[0] = malloc(sizeof(int) * (ac));
    list[1] = malloc(sizeof(int) * (ac * 100));
    if (ac == 1)
        return (84);
    if (ac == 2 || check(ac, av) == 0) {
        my_putchar('\n');
        return (0);
    }
    for (int j = 1; j < (ac); j++)
        list[0][j - 1] = str_to_int(av[j]);
    algo(list, &size_la, &size_lb, nb);
    return (0);
}