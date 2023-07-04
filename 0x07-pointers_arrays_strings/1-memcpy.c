#include "main.h"

/**
 * *_memcpy - copy and past  memory area to another
 * @dest: destination to copy
 * @src: memory area to copy from
 * @n: number of bytes
 * Return: pointer to char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
