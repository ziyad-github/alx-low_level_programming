#include <unistd.h>
#include <string.h>

/**
 * main - this function prints a text
 * Return: 1 on success, non-one otherwise
*/
int main(void)
{
write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
return (1);
}
