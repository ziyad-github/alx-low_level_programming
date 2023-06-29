#include <stdio.h>

/**
 * main - prints the sum of multiples of 3 and 5 before a number n
 * Return: 0 on success, non-zero otherwise
 */
int main(void)
{
	int n_multiples3 = 1024 / 3;
	int n_multiples5 = 1024 / 5;
	int sum = 0;
	int i;

	for (i = 1; i < n_multiples3; i++)
	{
		sum += i * 3;
	}

	for (i = 1; i < n_multiples5; i++)
	{
		sum += i * 5;
	}
	printf("%d\n", sum);
	return (0);
}
