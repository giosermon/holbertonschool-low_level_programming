#include "holberton.h"

/**
 * pal - function to compare string.
 *
 * @i: counter to begin string.
 * @len: lenght of the string.
 * @s: String to evaluate.
 *
 * Return: 1 for palindromme . 0 for not palindrome.
 *
 */
int pal(int i, int len, char *s)
{
	if (i == len - 1)
	{
		return (1);
	}
	else if (s[i] != s[len - 1])
	{
		return (0);
	}
	else if (i < len - 1)
	{
		return (pal(i + 1, len - 1, s));
	}
	return (1);
}
/**
 * lenght - Function for calculate lenght of the string.
 *
 * @s: String to evaluate.
 *
 * Return: lenght of the string.
 *
 */
int lenght(char *s)
{
	if (*s != '\0')
	{
		return (1 + lenght(s + 1));
	}
	return (0);
}
/**
 * is_palindrome - Function to evaluate is a palindrome.
 *
 * @s: String to evaluate is a palindrome word.
 *
 * Return: 1 for palindrome . 0 for not palindrome.
 *
 */
int is_palindrome(char *s)
{
	int len = lenght(s);

	return (pal(0, len, s));
}