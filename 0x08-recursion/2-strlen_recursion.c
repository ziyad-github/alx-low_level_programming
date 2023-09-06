#include "main.h"

/**
 * _strlen_recursion - this function print the length of a string
 * @s: the string to pass
 * Return: void
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);	
	}
	return (1 + _strlen_recursion(++s));
}
