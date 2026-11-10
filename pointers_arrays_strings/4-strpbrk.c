#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Searches a string for any of a set of bytes
 * @s: String to be scanned
 * @accept: Characters to match
 * Return: Pointer to the byte in s, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (NULL);
}
