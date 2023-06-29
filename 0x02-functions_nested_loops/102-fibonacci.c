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

	for (i = 1; i <= 50; i++)
	{
		if (i != 50)
		{
			printf("%ld, ", n1);
		} else
		{
			printf("%ld\n", n1);
		}
		next_n = n1 + n2;
		n1 = n2;
		n2 = next_n;
	}
	return (0);
}
