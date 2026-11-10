#include "main.h"

/**
 * cap_string - Capitalizes all words of a string
 * @s: Pointer to the string to be modified
 * Return: Pointer to the modified string
 */
char *cap_string(char *s)
{
	int i = 0;
	int j;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] -= 32;
	}

	while (s[i] != '\0')
	{
		j = 0;
		while (sep[j] != '\0')
		{
			if (s[i] == sep[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
			j++;
		}
		i++;
	}

	return (s);
}
