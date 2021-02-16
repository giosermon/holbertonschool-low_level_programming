#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - swap values of two integers.
 * @a: Variable 1.
 * @b: Variable 2.
 *
 *Return: Always void.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}

void swap_int(int *a, int *b)
{
	int swap;

	swap = *a;
	*a = *b;
	*b = swap;
}
