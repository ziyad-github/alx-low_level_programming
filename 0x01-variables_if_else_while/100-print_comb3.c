#include <stdio.h>
#include <sys/param.h>

/**
 * main - this function prints combinations of two digits
 * Return: 0 on success, non-zero otherwise
*/
int main(void)
{
int i;
int j;
for (i = 0; i < 10; i++)
{
for (j = 1; j < 10; j++)
{
int value = MIN((i * 10) + j, (j * 10) + i);
if (value < 10)
putchar('0');   
putchar(value + '0');
if (value == 89)
continue;
putchar(',');
putchar(' ');
}
}
return (0);
}
