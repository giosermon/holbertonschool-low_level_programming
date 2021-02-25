#include "holberton.h"

/**
 * _pow_recursion - Function.
 * @x: number
 * @y: variable
 * Return: Always 0.
 */

int _pow_recursion(int x, int y)
{
	/* base case */
	if (y == 0)
	{
		return (1);
	}
	if (y < 0)
	{
		return (-1);
	}
	else
	{
		y--;
		return (x * _pow_recursion(x, y));
	}
}
