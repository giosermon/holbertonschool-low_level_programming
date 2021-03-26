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
	unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int num;

	num = n ^ m;
	while (num > 0)
	{
		count += (1 & num);
		num >>= 1;
	}
	return (count);
}
