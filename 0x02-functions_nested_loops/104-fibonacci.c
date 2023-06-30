#include <stdio.h>

/**
 * main - prints the sequence of fibbonacci
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	unsigned long int n1 = 1;
	unsigned long int n2 = 2;
	unsigned long int count = 0;
	unsigned long int next_n;

	while (count < 98)
	{
		printf(n1);
		next_n = n1 + n2;
		n1 = n2;
		n2 = next_n;
	} else
	{
		printf("\n");
	}
	return (0);
}
