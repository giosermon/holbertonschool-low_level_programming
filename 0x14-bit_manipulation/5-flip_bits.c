#include "holberton.h"
#include <stdio.h>

/**
 * flip_bits -  function that returns the number of bits you would need to flip
 * to get from one number to another.
 * @n: number 1;
 * @m: number 2;
 * Return: thenumber of buts needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
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
