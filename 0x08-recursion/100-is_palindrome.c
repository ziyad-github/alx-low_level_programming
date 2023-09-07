#include "main.h"

/**
 * is_palindrome - this function shows if a string is a palindrome
 * @s: the string to enter
 * Return: 1 if palindrome, 0 if not
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	if (len == 0 || len == 1 || *s == '\0')
	{
		return (1);
	}
	else if ((*s != '\0') && (*s == *(len - s)))
	{
		return (is_palindrome(++s));
	}
}
