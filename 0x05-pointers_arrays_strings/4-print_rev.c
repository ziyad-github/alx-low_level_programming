#include "main.h"

/**
 * print_rev - prints a string
 * @str: pointer of the string
 */
void print_rev(char *str)
{
	int i;

	for (i = (_strlen(str) - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
