#include "main.h"

/**
 * swap_int - Swaps the values of two integers
 * @a: First integer pointer to be swapped
 * @b: Second integer pointer to be swapped
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
