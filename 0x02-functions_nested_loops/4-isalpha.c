#include "main.h"
#include <ctype.h>

/**
 * _isalpha - check if a char is low or up
 * @c: the character to check
 * Return: 1 on lowercase, 0 otherwise
*/
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
