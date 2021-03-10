#include "function_pointers.h"

/**
 * print_name - prints a name using a pointer function.
 * @name: name of the person
 * @f: Pointer function to call functions
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		(*f)(name);
}
