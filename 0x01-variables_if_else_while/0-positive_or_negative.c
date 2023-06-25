#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * main - This function shows if a random number is pos or neg
 * Return: 0 on success, non-zero otherwise 
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
        if (n < 0)
	{
	  printf("%d is negative\n", n);
	}
	else if (n > 0)
        {
	  printf("%d is positive\n", n);
	}
	else
	{
	  printf("%d is zero\n", n);
	}
        return (0);
}
