/*
** EPITECH PROJECT, 2020
** undefined
** File description:
** push_swap.h
*/

#include <stdarg.h>

#ifndef PUSH_SWAP_H_
#define PUSH_SWAP_H_

void swap_elem(int *array, int i1, int i2);
void sa(int *array, int *size);
void sb(int *array, int *size);
void pa(int *array_a, int *size_a, int *array_b, int *size_b);
void pb(int *array_a, int *size_a, int *array_b, int *size_b);
void ra(int *array_a, int *size_a);
void rb(int *array_b, int *size_b);
void rr(int *array_a, int *size_a, int *array_b, int *size_b);
void rra(int *array_a, int *size_a);
void rrb(int *array_b, int *size_b);
void rrr(int *array_a, int *size_a, int *array_b, int *size_b);
void my_putchar(char c);
int m_gestion(long number);
int my_put_nbr(int nb);
int str_to_int(const char *str);
void sort(int **list, int *size_la, int *size_lb, int temp);
int my_putstr(char const *str);

#endif