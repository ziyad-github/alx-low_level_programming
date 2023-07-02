#include "main.h"

/**
 * rev_string - reverse a string and affect it to a pointer
 * @s: pointer of the string
 * Return: void
 */
void rev_string(char *s)
{
	int i = 0;
	int len;

	while (s[i] != '\0')
	{
		i++;
	}

	len = i;

	for (i = len - 1; i >= 0; i--)
	{
		 s[i] = s[len - i - 1];
	}

	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
}
