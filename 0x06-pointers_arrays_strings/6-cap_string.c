#include "main.h"
#include <ctype.h>

/**
 * cap_string - changes to caps all beggening of words
 * @s: string to modify
 * Return: the resulting string
 */
char *cap_string(char *s)
{
	int i;

	i = 0;

	while (s[i] != '\0')
	{
		if (s[i] == ' ')
		{
			s[i+1] = toupper(s[i+1]);
		}
		i++;
	}

	return (s);
}
