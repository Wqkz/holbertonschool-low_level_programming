#include "variadic_functions.h"

/**
 * print_strings - Write 'function that prints strings'
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *ptr;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char*);

		if (ptr == NULL)
			printf("(nil)");
		else
		{
			printf("%s", ptr);
		}
		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
