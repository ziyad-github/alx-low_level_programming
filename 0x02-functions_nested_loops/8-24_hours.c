#include "main.h"

/**
 * jack_bauer - it prints time from 00:00 to 23:59
 * Return: void
*/
void jack_bauer(void)
{
	int hours, minutes;

	for (hours = 0; hours < 24; hours++)
	{
		for (minutes = 0; minutes < 60; minutes++)
		{
			_putchar('0' + (int)(hours / 10));
			_putchar('0' + (int)(hours % 10));
			_puchar(':');
			_putchar('0' + (int)(minutes / 10));
			_putchar('0' + (int)(minutes % 10));
			_putchar('\n');
		}
	}
}
