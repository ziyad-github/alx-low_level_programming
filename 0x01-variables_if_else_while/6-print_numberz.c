#include <stdio.h>

/**
 * main - this function prints numbers
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
char number = '0';
while(number <= '9')
{
putchar(number);
}
putchar('\n');
return (0);
}
