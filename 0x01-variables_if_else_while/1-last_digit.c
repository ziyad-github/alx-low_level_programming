#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - This function shows if a random number is pos or neg
 * Return: 0 on success, non-zero otherwise
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
 ld = n % 10;
if (ld > 5)
{
printf("Last digit of %d is %d and is greater than 5\n", n, ld);
}
else if (ld == 0)
{
printf("Last digit of %d is 0\n", n);
}
else
{
printf("Last digit of %d is %d and is less than 6 and not 0\n", n);
}
return (0);
}