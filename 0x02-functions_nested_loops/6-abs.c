#include "main.h"
#include <stdlib.h>

/**
 * _abs - it prints the absolute value of a number
 * @n: the number to check
 * Return: positive number
*/
int _abs(int n)
{
	if (n < 0)
	   return (n * -1);
	return n;
}
