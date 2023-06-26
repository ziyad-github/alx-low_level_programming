#include "main.h"

/**
 * print_alphabet - prints all the alphabets
 * Return: void
 */
void print_alphabet(void)
{
  const char alphabets[] = "abcdefghijklmnopqrstuvwxyz";
  int i;

  for (i = 0; i < 26; i++)
  {
    _putchar(alphabets[i]);
  }
  _putchar('\n');
}
