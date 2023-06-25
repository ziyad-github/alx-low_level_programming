#include <stdio.h>

/**
 * main - this function prints alphabets
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
int i;

for (i = 0; i < 10; i++)
{
putchar(i + '0');
}
putchar('\n');
return (0);
}
