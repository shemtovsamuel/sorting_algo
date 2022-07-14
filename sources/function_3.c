/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** function_3.c
*/

#include "../include/push_swap.h"

void rra(int *array_a, int *size_a)
{
    int a = 0;
    int b = *size_a - 1;
    int c = 0;

    while (b > a) {
        c = array_a[a];
        array_a[a] = array_a[b];
        array_a[b] = c;
        a++;
        b--;
    }
}

void rrb(int *array_b, int *size_b)
{
    int a = 0;
    int b = *size_b - 1;
    int c = 0;

    while (b > a) {
        c = array_b[a];
        array_b[a] = array_b[b];
        array_b[b] = c;
        a++;
        b--;
    }
}

void rrr(int *array_a, int *size_a, int *array_b, int *size_b)
{
    rra(array_a, size_a);
    rrb(array_b, size_b);
}