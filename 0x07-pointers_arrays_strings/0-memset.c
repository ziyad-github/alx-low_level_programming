#include "main.h"

/**
 * *_memset - fills memory with a const byte
 * @s: memory area
 * @b: char to copy
 * @n: number of times to copy b
 * Return: pointer to string
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
