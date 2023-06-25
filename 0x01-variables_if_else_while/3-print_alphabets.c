#include <stdio.h>

/**
 * main - this function prints alphabets
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
int i;
char letter = 'A';

for (i = 0; i < 26; i++)
{
putchar(alphabets[i]);
}
while(letter <= 'Z')
{
putchar(letter);
letter++;
}
putchar('\n');
return (0);
}
