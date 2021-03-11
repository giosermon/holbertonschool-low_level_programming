#include "variadic_functions.h"

/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: numbers of parameters to sum.
 *
 * Return: Result of the sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numbers;
	int sum = 0;
	unsigned int i =0;

	if (n == 0)
		return (0);
	va_start(numbers, n);

	while (i < n)
{
	sum += va_arg(numbers, int);
	i++;
}
	va_end(numbers);
	return (sum);
}
