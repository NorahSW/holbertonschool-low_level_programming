#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring
 * @s: Pointer to the string
 * @accept: Characters to match
 * Return: Number of bytes in initial segment
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;
	int found;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				found = 1;
				break;
			}
		}
		if (!found)
		{
			return (i);
		}
	}

	return (i);
}
