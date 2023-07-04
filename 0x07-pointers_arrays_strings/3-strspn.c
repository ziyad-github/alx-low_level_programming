#include "main.h"

/**
 * *_strspn - gets the length of string inside a string
 * @s: string to check
 * @accept: string to give
 * Return: the number of bytes in common
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, f, found;

	f = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				f++;
				found = 1;
			}
		}
		if (found == 0)
		{
			return (f);
		}
	}

	return (0);
}
