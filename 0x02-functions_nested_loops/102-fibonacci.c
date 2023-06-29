#include <stdio.h>

/**
 * main - prints the sequence of fibbonacci
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	int n1 = 1;
	int n2 = 2;
	int next_n = 0;
	int i;

	for (i = 1; i < 50; i++)
	{
		next_n = n1 + n2;
		printf("%d, ", next_n);
		n1 = n2;
		n2 = next_n;
	}

	return (0);
}
