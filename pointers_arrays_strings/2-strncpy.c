#include "main.h"

/**
 * _strncpy - Copies a string up to n bytes
 * @dest: Pointer to destination buffer
 * @src: Pointer to source string
 * @n: Maximum number of bytes to copy
 * Return: Pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
