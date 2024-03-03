# include <stdio.h>
# include <stdarg.h>
# include <stdlib.h>
# include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: separator
 * @n: number of integers to be entered
 * @...: integers
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int nums;


	va_start(ap, n);
	for (; i < n; i++)
	{
		nums = va_arg(ap, int);
		printf("%d", nums);
		if (separator == NULL)
			continue;
		if (i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}

