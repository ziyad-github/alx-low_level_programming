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
if (i == 9)
continue;
putchar(44);
putchar(32);
}
/* putchar(36) */
putchar('\n');
return (0);
}
