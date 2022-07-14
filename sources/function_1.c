/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** function_1.c
*/

#include "../include/push_swap.h"

void swap_elem(int *array, int i1, int i2)
{
    int temp = array[i1];

    array[i1] = array[i2];
    array[i2] = temp;
}

void sa(int *array, int *size)
{
    if (*size > 1)
        swap_elem(array, 0, 1);
}

void sb(int *array, int *size)
{
    if (*size > 1)
        swap_elem(array, 0, 1);
}