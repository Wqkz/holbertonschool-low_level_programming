#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints 'all natural numbers from n to 98'
 * separated by a comma
 * @n: the value
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
