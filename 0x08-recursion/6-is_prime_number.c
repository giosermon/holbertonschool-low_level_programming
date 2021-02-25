#include "holberton.h"

/**
 * is_prime_number - function..
 * @n: number
 * Return: Always 0.
 */

int prime(int i, int num)
{
	/*Base case*/
	if (i < num)
	{
		if (num % i == 0)
		{
			return (0);
		}
	}
	if (num == i)
	{
		return (1);
	}
	else
	{
		return (prime(i + 1, num));
	}
}


/**
 * is_prime_number - function that said is a prime number.
 * @n: number to evaluate
 *
 * Return: 0 is not prime. 1 is prime.
 */
int is_prime_number(int n)
{
	/* base case */
	if (n <= 1)
	{
		return (0);
	}
	return (prime(2, n));
}
