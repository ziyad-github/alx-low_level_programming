#include "main.h"

/**
 * _strlen - count the length of a string
 * @s: the string to look into
 * Return: int
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] < '\0')
	{
		i++;
	}

	return (i);
}
