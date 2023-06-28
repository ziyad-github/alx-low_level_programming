#include "main.h"

/**
 * print_times_table - prints the table of n
 * @n: the number to give off the table
 */
void print_times_table(int n)
{
        int i, j, k;

	if (n < 0 || n > 15)
	   return;

        for (i = 0; i <= n; i++)
        {
                for (j = 0; j <= n; j++)
                {
                        k = j * i;
                        if (j == 0)
                        {
                                _putchar(k + '0');
                        }

                        if (k < 10 && j != 0)
                        {
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
				_putchar(' ');
                                _putchar(k + '0');
                        } else if (k >= 10)
                        {
                                _putchar(',');
                                _putchar(' ');
				_putchar(' ');
                                _putchar((k / 10) + '0');
                                _putchar((k % 10) + '0');
                        }
                }
                _putchar('\n');
        }
}
