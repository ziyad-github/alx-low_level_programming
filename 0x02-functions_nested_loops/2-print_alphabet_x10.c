#include "main.h"

/**
 * print_alphabet_x10 - Entry point
 * Return:0
 */

void print_alphabet_x10(void)
{
	char c = 'a';
        int i = 0;

	while (i <= 10)
	{
	        while (c <= 'z')
	        {
	                _putchar(c);
	                c++;
	        }
		c = 'a';
	        i++;
		_putchar('\n');
	}
}

	  
	
		
