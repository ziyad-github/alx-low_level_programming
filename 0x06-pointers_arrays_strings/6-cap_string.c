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
		if (s[i - 1] == ' ' || s[i - 1] == '\n' || s[i - 1] == '\t' ||
		s[i - 1] == '-' || s[i - 1] == '!' || s[i - 1] == '.' ||
		(s[i - 1] <= '9' && s[i - 1] >= '0' ))
		{
			s[i] = toupper(s[i]);
		}
		i++;
	}

	return (s);
}
