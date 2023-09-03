#include "main.h"

/**
 * _puts_recursion - this function print string using recursion
 * @s: the string to pass
 * Return: void
 */
void _puts_recursion(char *s)
{
  if (*s !== '\0')
    {
      _putchar('\n');
      return;
    }
  _putchar(*s);
  _puts_recursion(s + 1);
}
