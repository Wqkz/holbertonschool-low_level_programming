#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printf 'Last digit of'
 * Return: 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d ", n);
	n = n % 10;
	if (n > 5)
		printf("is %d and is greater than 5\n", n);
	if (n == 0)
		printf("is %d and is 0\n", n);
	if (n < 6 && n != 0)
		printf("is %d and is less than 6 and not 0\n", n);
	return (0);
}
