#include "main.h"

/**
 * *_strpbrk - Write 'function that searches a string for any of a set of byte'
 * @s: initial segment
 * @accept: bytes in the string
 * Return: s if matches one of bytes in accept, 0 if no byte found
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		++s;
	}
	return (0);
}
