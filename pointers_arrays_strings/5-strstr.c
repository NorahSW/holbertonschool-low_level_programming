#include "main.h"
#include <stddef.h>

/**
 * _strstr - Locates a substring
 * @haystack: String to be scanned
 * @needle: Substring to search for
 * Return: Pointer to the beginning of substring, or NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int i;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		i = 0;

		while (haystack[i] == needle[i])
		{
			if (needle[i + 1] == '\0')
			{
				return (haystack);
			}
			i++;
		}
		haystack++;
	}

	return (NULL);
}
