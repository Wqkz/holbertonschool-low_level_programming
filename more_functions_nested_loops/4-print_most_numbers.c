#include "main.h"

/**
 * print_most_numbers - Write 'function that prints the numbers, from 0 to 9'
 * without print 2 & 4
 */

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
		{
			continue;
		}
		else
		{
			_putchar(num + '0');
		}
	}
	_putchar ('\n');
}
