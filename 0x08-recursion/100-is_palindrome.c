#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - size
 * @s: pointer to string params
 * Return: recursion
 */
int _strlen_recursion(char *s)
{
        if (*s == '\0')
        {
                return (0);
        }
        return (1 + _strlen_recursion(++s));
}

/**
 * is_palindrome - this function shows if a string is a palindrome
 * @s: the string to enter
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);
	int m = ((len / 2) + 1);

	if (len == 0 || len == 1 || *s == '\0' || (len % 2 != 0 && *s == s[m]))
	{
		return (1);
	}
	else if ((*s != '\0') && (*s == s[len - 1]))
	{
		s[len - 1] = '\0';
		return (is_palindrome(++s));
	}
	else
	{
		return (0);
	}
}
