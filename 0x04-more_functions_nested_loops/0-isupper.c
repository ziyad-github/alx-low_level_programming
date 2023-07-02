#include <ctype.h>
#include "main.h"

/**
* _isupper - checks if a char is in upper or lower case
* @c: month in number format
* Return: 1 on upper and 0 otherwise
*/

void _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
