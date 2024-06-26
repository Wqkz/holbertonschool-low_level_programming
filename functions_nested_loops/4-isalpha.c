#include <ctype.h>
#include "main.h"

/**
 * _isalpha - checks 'alphabetic character'
 * Return: 1 if lowercase or uppercase, 0 otherwise
 * @c parameter checking c char:
 * c - character to be checked
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);

	else
		return (0);
}
