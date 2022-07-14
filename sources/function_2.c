/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** function_2.c
*/

#include "../include/push_swap.h"

void pa(int *array_a, int *size_a, int *array_b, int *size_b)
{
    if (size_b > 0) {
        for (int i = *size_a; i > 0; i--) {
            array_a[i] = array_a[i - 1];
        }
        array_a[0] = array_b[0];
        for (int i = 0; i < *size_b; i++) {
            array_b[i] = array_b[i + 1];
            array_b[i + 1] = 0;
        }
    }
    *size_b -= 1;
    *size_a += 1;
}

void pb(int *array_a, int *size_a, int *array_b, int *size_b)
{
    if (size_a > 0) {
        for (int i = *size_b; i > 0; i--) {
            array_b[i] = array_b[i - 1];
        }
        array_b[0] = array_a[0];
        for (int i = 0; i < *size_a; i++) {
            array_a[i] = array_a[i + 1];
            array_a[i + 1] = 0;
        }
    }
    *size_a -= 1;
    *size_b += 1;
}

void ra(int *array_a, int *size_a)
{
    int a = 0;
    int b = *size_a - 1;
    int c = 0;

    while (a < b) {
        c = array_a[a];
        array_a[a] = array_a[b];
        array_a[b] = c;
        a++;
        b--;
    }
}

void rb(int *array_b, int *size_b)
{
    int a = 0;
    int b = *size_b - 1;
    int c = 0;

    while (a < b) {
        c = array_b[a];
        array_b[a] = array_b[b];
        array_b[b] = c;
        a++;
        b--;
    }
}

void rr(int *array_a, int *size_a, int *array_b, int *size_b)
{
    ra(array_a, size_a);
    rb(array_b, size_b);
}