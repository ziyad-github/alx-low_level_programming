#include <stdio.h>

/**
 * main - this function prints alphabets
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int i;

for (i = 25; i > 0; i--)
{
putchar(alphabets[i]);
}
putchar('\n');
return (0);
}
