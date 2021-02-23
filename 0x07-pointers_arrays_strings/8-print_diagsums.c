#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - function that print a sum of two diagonals.
 *@a: pointer
 *@size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	long int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < (size * size); i++)
	{
		if (i % (size + 1) == 0)
			sum1 += *(a + i);
		if (i % (size - 1) == 0  && i != 0 && i < size * size - 1)
			sum2 += *(a + i);
	}

	printf("%ld, %ld\n", sum1, sum2);
}
