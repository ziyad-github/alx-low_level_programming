#include <stdio.h>

/**
 * main - this function prints alphabets
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
  const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
  
  for (int i = 0; i < 26; i++)
    {
      putchar(alphabets[i]);
    }
  return (0);
}
