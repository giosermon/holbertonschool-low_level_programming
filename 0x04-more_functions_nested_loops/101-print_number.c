#include "holberton.h"

/**
 * print_number - Prints any number with putchar
 * @n: Number to print.
 *
 *Return: Always void.
 */
void print_number(int n)
{
	unsigned int a, cif, div, i, num, last, dig, cont;

	if (n < 0)
	{
		cont = -1 * n;
		a = -1 * n;
	}
	else
	{
		cont = n;
		a = n;
	}

	for (cif = 1 ;  cont / 10 > 0 ; cif++)
		cont = cont / 10;

	div = 1;
	for (i = cif - 1 ; i > 0 ; i--)
		div = div * 10;

	if (n < 0)
		_putchar('-');
	for (dig = cif ; dig >= 1 ; dig--)
	{
		num = a / div;
		if (num >= 10)
		{
			last = num % 10;
			_putchar(last + '0');
		}
		else
			_putchar(num + '0');
		div = div / 10;
	}
}
