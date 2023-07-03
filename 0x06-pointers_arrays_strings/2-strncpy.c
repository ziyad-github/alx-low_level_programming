#include "main.h"

/**
 * _strncpy - copy a string to another
 * @dest: string that gets the copy
 * @src: string to copy
 * @n: the number of bytes
 * Return: a char pointer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
