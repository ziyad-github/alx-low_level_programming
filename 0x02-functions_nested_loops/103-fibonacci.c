#include <stdio.h>

/**
 * main - prints the sequence of fibbonacci
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	long int n1 = 1;
	long int n2 = 2;
	long int sum = 0;
	long int next_n, i;

	while (n1 < 4000000)
	{
		if (n1 % 2 == 0)
		{
			sum += n1;
		}
		next_n = n1 + n2;
		n1 = n2;
		n2 = next_n;
	}
	printf("%ld\n", sum);
	return (0);
}
