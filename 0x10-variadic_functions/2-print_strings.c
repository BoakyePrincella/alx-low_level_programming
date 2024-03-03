# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include "variadic_functions.h"

/**
 * print_strings - prints strings
 *@separator: separator
 *@n: number of strings
 *@...: strings to be entered
 *Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list(ap);
	unsigned int i;
	char *string;

	va_start(ap, n);
	for (; i < n; i++)
	{
		string = va_arg(ap, char*);
		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

