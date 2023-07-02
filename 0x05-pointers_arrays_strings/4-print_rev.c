#include "main.h"

/**
 * print_rev - prints a string
 * @str: pointer of the string
 */
void print_rev(char *str)
{
	int i;

	for (i = (len(str) - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

int len(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (0);
}
