#include "main.h"
#include <stdlib.h>

/**
 * rev_string - reverse a string and affect it to a pointer
 * @s: pointer of the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len, len1;
	char *str;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	str = malloc(sizeof(char) * (len + 1));

	for (i = len - 1; i >= 0; i--)
	{
		str[len - i - 1] = s[i];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}

	free(str);
}
