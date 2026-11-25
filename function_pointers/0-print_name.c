#include "function_pointers.h"

/**
 * print_name - prints a name using a given function pointer
 * @name: string representing the name to print
 * @f: pointer to a function that takes a char pointer and returns nothing
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
