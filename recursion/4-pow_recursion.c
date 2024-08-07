#include "main.h"

/**
 * _pow_recursion - Write 'function that returns the value'
 * of x raised to the power of y
 * @x: value
 * @y: power
 * Return: -1 if y < 0, otherwise 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	else
	{
		return (_pow_recursion(x, y - 1) * x);
	}
}
