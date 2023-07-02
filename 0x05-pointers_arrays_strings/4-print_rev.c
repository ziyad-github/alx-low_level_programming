#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer of the string
 */
void _puts(char *str)
{
	int i;

	for (i = (_strlen(str) - 1); i >= 0; i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
