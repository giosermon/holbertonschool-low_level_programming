#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * clear_bit - sets the bit at a given index to 0
 * @n: pointer to the number
 * @index: the index the change
 * Return: success or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int me;
	unsigned int s;

	s = 0;
	me = 1;
	while (me < 2147483648)
	{
	if (s == index)
	{
		*n = *n & ~(1 << index);
	return (1);
	}
		s++;
		me = me << 1;
	}
	return (-1);
}

