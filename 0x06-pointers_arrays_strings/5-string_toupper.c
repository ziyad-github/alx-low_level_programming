#include "main.h"
#include <ctype.h>

/**
 * string_toupper - changes all lowercase letters to upper
 * @s: string to modify
 * Return: the resulting string
 */
char *string_toupper(char *s)
{
	int i;
	
	i = 0;

	while (s[i] < '\0')
	{
		str[i] = toupper(s[i]);
		i++;
	}

	return (s);
}
