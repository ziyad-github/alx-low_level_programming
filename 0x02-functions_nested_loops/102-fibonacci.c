#include <stdio.h>

/**
 * main - prints the sequence of fibbonacci
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int next_n = 0;
	int i;

	for (i = 1; i < 50; i++)
	{
		next_n = n1 + n2;
		printf("%d, ", next_n);
		n1 = n2;
		n2 = next_n;
	}
	putchar('\n');
	return (0);
}
