#include <unistd.h>
#include <string.h>

/**
 * main - this function prints a text
 * Return: 1 on success, non-one otherwise
*/
int main(void) {
const char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
int len = sizeof(str) - 1;
write(STDERR_FILENO, str, len);
return (1);
}
